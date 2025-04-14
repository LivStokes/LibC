/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olstokes <olstokes@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:32:32 by olstokes          #+#    #+#             */
/*   Updated: 2025/04/14 17:16:46 by olstokes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	base_validation(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2)
		return (1);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	base_len;
	long int	nb;

	nb = nbr;
	base_len = ft_strlen(base);
	if (base_validation(base))
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= base_len)
		ft_putnbr_base(nb / base_len, base);
	ft_putchar(base[nb % base_len]);
}
/*
int	main(void)
{
	ft_putnbr_base(42, "0123456789");        // Decimal: prints "42"
	ft_putchar('\n');
	ft_putnbr_base(42, "01");                // Binary: prints "101010"
	ft_putchar('\n');
	ft_putnbr_base(42, "0123456789ABCDEF");  // Hexadecimal: prints "2A"
	ft_putchar('\n');
	return 0;
}
*/
