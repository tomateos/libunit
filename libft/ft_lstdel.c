/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 17:14:57 by tzhou             #+#    #+#             */
/*   Updated: 2016/12/05 17:46:31 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*copy;

	copy = *alst;
	if (copy->next)
		ft_lstdel(&(copy->next), del);
	del(copy->content, copy->content_size);
	if (copy)
		free(copy);
	*alst = NULL;
}
