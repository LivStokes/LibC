/*
a program that takes strings as arguments and displays the last argument followed by a newline
*/

#include <unistd.h>
int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		char *str = argv[argc - 1];	//gets the last argument.
		while (*str)
		{
			write(1, str, 1);
			str++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

/*
a program that takes strings as arguments and displays the first argument followed by a newline
*/
#include <unistd.h>
int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		char *str = argv[1];	//gets the first argument.
		while (*str)
		{
			write(1, str, 1);
			str++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

/*
a program that takes strings as arguments and displays the first argument followed by a newline
*/
#include <unistd.h>
int	main(int argc, int **argv)
{
	if (argc > 1)
	{
		char *str = argv[2];
		while (*str)
		{
			write(1, str, 1);
			str++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
