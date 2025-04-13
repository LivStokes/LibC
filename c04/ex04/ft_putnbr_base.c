/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olstokes <olstokes@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 14:13:05 by olstokes          #+#    #+#             */
/*   Updated: 2025/04/13 14:25:01 by olstokes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr_base(int nbr, char *base)
{
	int	nb;

	nb = nbr;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar('0' + nb);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
