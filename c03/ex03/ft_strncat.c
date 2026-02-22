/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olstokes <olstokes@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 10:11:52 by olstokes          #+#    #+#             */
/*   Updated: 2025/04/09 12:28:13 by olstokes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[40] = "Woofing";
	char	src[20] = "Meowing";
	unsigned int	nb = 3;
	char	*s;

	ft_strncat(dest, src, nb);
	s = dest;
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
	write(1, "\n", 1);
	return (0);
}
*/
