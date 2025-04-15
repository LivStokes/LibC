/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olstokes <olstokes@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:28:02 by olstokes          #+#    #+#             */
/*   Updated: 2025/04/15 18:28:04 by olstokes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		reutn (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
