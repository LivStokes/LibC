/*
write a program that takes a string and displays it, replacing each of its letters by the next one in alphabetical order. 'a' becomes 'b', 'b' becomes 'c', etc. if the number of  arguments is not 1, the program displays a new line.
*/

#include <unistd.h>
void	rotone(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] == 'z')
				str[i] = 'g';
			else
				str[i] += 7;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i] == 'Z')
				str[i] = 'G';
			else
				str[i] += 7;
		}
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char ** argv)
{
	if (argc == 2)
		rotone(argv[1]);
	write(1, "\n", 1);
	return (0);
}
