/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olstokes <olstokes@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:07:14 by olstokes          #+#    #+#             */
/*   Updated: 2025/04/09 16:07:45 by olstokes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}

int	main(void)
{
	char	s1[20];
	char	s2[20];
	char	result;

	strcpy(s1, "abc");
	strcpy(s2, "abd");
	result = ft_strncmp(s1, s2, 3);
	if (result == 0)
	{
		ft_putstr("s1 = s2\n");
	}
	else if (result < 0)
	{
		ft_putstr("s1 < s2\n");
	}
	else
	{
		ft_putstr("s1 > s2\n");
	}
	return (0);
}
*/
