#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *str) 
{
    int len;
    
    len = 0;
    while (str[len]) 
        len++;
    return (len);
}

char *ft_strjoin(int size, char **strs, char *sep) 
{
    int total_len;
    int sep_len;
    int current_pos;
    int i;
    int j;

    total_len = 0;
    sep_len = ft_strlen(sep);
    current_pos = 0;
    i = 0;
    j = 0;

    if (size == 0) 
    {
        char *r;
        
        r = (char *)malloc(1 * sizeof(char));
        if (!r) 
            return (NULL);
        r[0] = '\0';
        return (r);
    }

    while (i < size) 
    {
        total_len += ft_strlen(strs[i]);
        if (i < size - 1) 
            total_len += sep_len;
        i++;
    }

    r = (char *)malloc((total_len + 1) * sizeof(char));
    if (!r) 
        return (NULL);
    i = 0;

    while (i < size) 
    {
        j = 0;
        while (strs[i][j])
            result[current_pos++] = strs[i][j++];
        if (i < size - 1) 
        {
            j = 0;
            while (sep[j]) 
                r[current_pos++] = sep[j++];
        }
        i++;
    }

    r[current_pos] = '\0';
    return (r);
}
