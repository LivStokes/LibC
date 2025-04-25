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
    // If min is greater than or equal to max, return a null pointer
    if (min >= max) 
    {
        return NULL;
    }

    // Allocate memory for the array (max - min) integers
    int *arr = (int *)malloc((max - min) * sizeof(int));
    if (arr == NULL) 
    {
        return NULL;  // Return NULL if memory allocation fails
    }

    // Fill the array with values from min to max - 1
    int i;
    
    i = 0;
    while (min < max) 
    {
        arr[i] = min;
        min++;
        i++;
    }

    return (arr);
}
