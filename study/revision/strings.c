//ft_putchar
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

//ft_print_alphabet
void	ft_print_alphabet(void)
{
	char	i;

	i = 'a';
	while (i <= 'z')
	{
		ft_putchar(i);
		i++;
}

//ft_is_negative
void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		ft_putchar('P');
	}
	else
	{
		ft_putchar('N');
	}
}

//ft_ft
void	ft_ft(int *nbr)
{
	*nbr = 42;
}

//ft_swap
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp
}

//ft_div_mod
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

//ft_ultimate_div_mod
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;
	
	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

//ft_putstr
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

//ft_strlen
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++
	return (i);
}

//ft_strcpy
char	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

//ft_strncpy
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	if (i < n && src[i] != '\0');
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	dest[n] = '\0';
	return (dest);
}

//ft_str_is_alpha
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0');
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' || str[i] <= 'z' && str[i] >= 'A' || str[i] <= 'Z')
			return (1);
		i++;
	}
	return (0);
}

//ft_strupcase
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

//ft_strcapitalise
char	*ft_strcapitalize(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <='Z')
			str[i] += 32;	//making everything lowercase.
		if (n && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;	//Capitalizes first letter of word.

		if ((str[i] < '0' && str[i] > '9') 
			|| (str[i] < 'A' && str[i] > 'Z') 
			|| (str[i] < 'a' && str[i] > 'z')) //all non alphanumeric.
			n = 1; //next letter might start new word.
		else
			n = 0; //doesnt capitalize non alphanumeric.
		i++;
	}
	return (str);
}

//ft_strcmp
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (1)
	{
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
		{
			break;
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

//ft_strncmp
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
		{
			return (s1[i] - s2[i]);		//difference between s1 and s2.
		}
		i++
	}
	return (0);
}

//ft_strcat
char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;	//dest holds its full string value after loop.
	while (*src != '\0')
	{
		dest[i++] = *src++;	//copies all chars from src to dest.
	}
	dest[i] = '\0';
	return (dest);
}

//ft_strncat
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

//ft_strstr
char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*ss;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		s = str;
		ss = to_find;
		while (*s && *ss && *s == *ss)
		{
			s++;
			ss++;
		}
		if (*ss == '\0')
			return (str);
		str++;
	}
	return (0);
}

//ft_strlcat
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d;
	unsigned int	s;

	d = 0;
	s = 0;
	i = 0;
	while (dest[d] != '\0')	//calculates length of dest. 
		d++;
	while (src[s] != '\0')
		s++;
	if (size <= d)		//if size is <= to dest len, we return size and src.
		return (size + s);
	while (src[i] && (d + i + 1) < size)	//num of chars in dest after adding one more char from src.
	{
		dest[d + i] = src[i];	//position in dest where the next char from src will be placed.
		i++;
	}
	dest[d + i] = '\0';	//null terminates the result string.
	return (d + s);		//returns total length.
}

//ft_putnbr
void	ft_putnbr(int n)
{
	long int	nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
	{
		ft_putchar('0' + nbr);
	}
}

//ft_atoi
int	ft_atoi(char *str)
{

