#include <stdlib.h>

char *ft_strdup(char *src) 
{
    int i;
    char *r;
    
    i = 0;
    while (src[i] != '\0') 
        i++;
    r = (char *)malloc((i + 1) * sizeof(char));
    if (!r)
        return (NULL);
    i = 0;
    while (src[i] != '\0') 
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}