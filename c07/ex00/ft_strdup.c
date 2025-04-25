/*
Reproduce the behavior of the function strdup (man strdup).
• Here’s how it should be prototyped :
char *ft_strdup(char *src);
*/


#include <stdlib.h>

// Function to duplicate a string
char *ft_strdup(char *src) 
{
    int i;
    
    i = 0;

    // Find the length of the source string
    while (src[i] != '\0') 
    {
        i++;
    }

    // Allocate memory for the new string (including space for the null-terminator)
    char *dup = (char *)malloc((i + 1) * sizeof(char));
    if (dup == NULL) 
    {
        return NULL;  // Return NULL if memory allocation fails
    }

    // Copy the characters from src to the newly allocated memory
    i = 0;
    while (src[i] != '\0') 
    {
        dup[i] = src[i];
        i++;
    }

    // Null-terminate the new string
    dup[i] = '\0';

    return dup;
}