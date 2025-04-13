#include <unistd.h>

char	*rev_print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	i--;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return (str);
}

int	main(void)
{
	rev_print("Hello");
	write(1, "\n", 1);
	rev_print("rainbow dash");
	write(1, "\n", 1);
	rev_print("");
	write(1, "\n", 1);
	return (0);
}
