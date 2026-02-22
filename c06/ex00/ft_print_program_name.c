/*
• We’re dealing with a program here, you should therefore have a function main in
your .c file.
• Create a program that displays its own name.
*/

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

int	main(int argc, char **argv)
{
    ft_putstr(argv[0]);
	ft_putchar('\n');
	return (0); // The value 0 is returned to the operating system's shell (like Bash), signifying that the program completed without any errors.
}
