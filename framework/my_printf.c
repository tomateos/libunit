/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 16:59:27 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/13 21:04:22 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

char const	*g_conversion = "sdc%";

static int	convert_arg(char *temp, va_list ap)
{
	if (temp[1] == 's')
	{
		my_putstr(va_arg(ap, char*));
		free(temp);
	}
	else if (temp[1] == 'd')
	{
		my_putnbr(va_arg(ap, int));
		free(temp);
	}
	else if (temp[1] == 'c')
	{
		my_putchar(va_arg(ap, int));
		free(temp);
	}
	return (0);
}

static int	parse_format(char *format, int len, va_list ap)
{
	char	*temp;
	char	c;

	if (!(temp = my_strndup(format, len + 1)))
		return (-1);
	c = format[len];
	if (c == '%')
	{
		free(temp);
		my_putchar(c);
		return (1);
	}
	return (convert_arg(temp, ap));
}

static int	change_colors(char *format, int len)
{
	char	*color;

	if (!(color = my_strndup(format, len + 1)))
		exit(-1);
	if (!(my_strcmp(color, "{red}")))
		my_putstr("\x1B[31m");
	else if (!(my_strcmp(color, "{green}")))
		my_putstr("\x1B[32m");
	else if (!(my_strcmp(color, "{yellow}")))
		my_putstr("\x1B[33m");
	else if (!(my_strcmp(color, "{blue}")))
		my_putstr("\x1B[34m");
	else if (!(my_strcmp(color, "{magenta}")))
		my_putstr("\x1B[35m");
	else if (!(my_strcmp(color, "{cyan}")))
		my_putstr("\x1B[36m");
	else if (!(my_strcmp(color, "{white}")))
		my_putstr("\x1B[37m");
	else
	{
		my_putstr(color);
		return (len);
	}
	free(color);
	return (0);
}

static int	get_format(char *format, va_list ap)
{
	int		len;

	len = 1;
	if (format[0] == '%')
	{
		while (format[len] && !my_strchr(g_conversion, format[len]))
			len++;
		if (!format[len])
			exit(-1);
		return (parse_format(format, len, ap));
	}
	else if (format[0] == '{')
	{
		while (format[len] && format[len] != '}')
			len++;
		if (!format[len])
			exit(-1);
		return (change_colors(format, len));
	}
	exit(-1);
}

int			my_printf(const char *format, ...)
{
	va_list ap;
	int		out;

	va_start(ap, format);
	out = 0;
	while (*format && out++ >= 0)
	{
		if (*format == '%')
		{
			out += get_format((char*)&*format, ap) - 1;
			while (*(++format) && (!(my_strchr(g_conversion, *format))))
				out--;
		}
		else if (*format == '{')
		{
			out += get_format((char*)&*format, ap) - 1;
			while (*(++format) && *format != '}')
				out--;
		}
		else
			my_putchar(*format);
		format++;
	}
	va_end(ap);
	return (out);
}
