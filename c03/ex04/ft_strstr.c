/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olstokes <olstokes@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 10:21:14 by olstokes          #+#    #+#             */
/*   Updated: 2025/04/09 16:56:50 by olstokes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    if (to_find[0] == '\0')
        return (str);

    i = 0;
    while (str[i] != '\0')
    {
        j = 0;
        while (to_find[j] != '\0' && str[i + j] == to_find[j])
            j++;
        if (to_find[j] == '\0')
            return (&str[i]);
        i++;
    }
    return (NULL);

}
/*
void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(void)
{
	char	str[30] = "the start the end";
	char	to_find[20] = "the start";
	char	*result;

	result = ft_strstr(str, to_find);
	if (result)
		ft_putstr(result);
	else
		ft_putstr("ss not found");
	write(1, "\n", 1);
	return (0);
}
*/
