//Strings can be used to print something in the main function.
//When using strings, declare an integer and set the vaue of that integer to 0.
//Then create a loop that continues if the string != '\0'.
//Then use the write function to allow the string to be printed.

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

//Write this in the main to display the string.
//Call the function and write whats needed to be display.
//Always return 0.

int	main(void)
{
	ft_putstr("Hello");
	return (0);
}
