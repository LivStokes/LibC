/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olstokes <olstokes@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:47:29 by olstokes          #+#    #+#             */
/*   Updated: 2025/04/09 15:59:38 by olstokes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
    while(*s1 != '\0' && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
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
	result = ft_strcmp(s1, s2);
	if (result == 0)
		ft_putstr("Equal");
	else if (result < 0)
		ft_putstr("s1 < s2\n");
	else
		ft_putstr("s1 > s2\n");
	return (0);
}
*/
