/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olstokes <olstokes@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:28:11 by olstokes          #+#    #+#             */
/*   Updated: 2025/04/15 18:28:15 by olstokes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	i = power;
	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (i > 0)
	{
		result = result * nb;
		i--;
	}
	return (result);
}
