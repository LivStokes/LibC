/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olstokes <olstokes@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 17:07:33 by olstokes          #+#    #+#             */
/*   Updated: 2025/04/14 17:16:03 by olstokes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb)
{
	char c;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11)
		return;
	}
	if (nb < 0 )
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}
/*
int	main(void)
{
	ft_putnbr(2147483647);
	ft_putchar('\n');
	return (0);
}
*/
