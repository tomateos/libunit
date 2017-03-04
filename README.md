libunit is a testing framework for 42 projects.
The first testing routine directory, tests, includes one suite of verification tests to show that the unit tester can indeed detect a passed test (OK), a failed test (KO), a segmentation fault (SEGV) or a bus error (BUSE).
The second testing routine directory, real_tests, includes unit tests for several functions from the project libft, a recoded version of the C library.
The last directory is a libft, with some highly questionable edits, designed to fail several of the libft unit tests.
To run a test routine, run the command "make test" in the test directory. For libft, change the path to the location of libft first.
