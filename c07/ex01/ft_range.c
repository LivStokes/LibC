/*
Create a function ft_range which returns an array ofints. This int array should
contain all values between min and max.
• Min included - max excluded.
• Here’s how it should be prototyped :
int *ft_range(int min, int max);
• If min´value is greater or equal to max’s value, a null pointer should be returned
*/

#include <stdlib.h>  // For malloc

int *ft_range(int min, int max) 
{
    int *r;
    int i;

    if (min >= max) 
        return (NULL);
    r = (int *)malloc((max - min) * sizeof(int));
    if (!r) 
        return (NULL);    
    i = 0;
    while (min < max) 
    {
        arr[i] = min;
        min++;
        i++;
    }
    return (arr);
}
