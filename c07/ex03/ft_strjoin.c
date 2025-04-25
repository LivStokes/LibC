/*
Write a function that will concatenate all the strings pointed by strs separated by
sep.
• size is the number of strings in strs
• if size is 0, it should a freeable empty string.
• Here’s how it should be prototyped :
char *ft_strjoin(int size, char **strs, char *sep);
*/

#include <unistd.h>  // For write
#include <stdlib.h>  // For malloc and free

// Custom function to calculate the length of a string
int ft_strlen(char *str) 
{
    int len;
    
    len = 0;
    while (str[len] != '\0') 
    {
        len++;
    }
    return (len);
}

// Function to join the strings
char *ft_strjoin(int size, char **strs, char *sep) 
{
    if (size == 0) 
    {
        // If size is 0, return an empty string
        char *empty_str = (char *)malloc(1 * sizeof(char));
        if (empty_str == NULL) 
        {
            return NULL;  // Return NULL if memory allocation fails
        }
        empty_str[0] = '\0';  // Empty string
        return (empty_str);
    }

    // Calculate the total length of the resulting string
    int total_len = 0;
    int sep_len = ft_strlen(sep);  // Length of separator

    int i;
    
    i = 0;
    while (i < size) 
    {
        total_len += ft_strlen(strs[i]);  // Add length of each string
        if (i < size - 1) 
        {
            total_len += sep_len;  // Add separator length except for the last string
        }
        i++;
    }

    // Allocate memory for the concatenated result
    char *result = (char *)malloc((total_len + 1) * sizeof(char));  // +1 for null terminator
    if (result == NULL) 
    {
        return NULL;  // Return NULL if memory allocation fails
    }

    // Concatenate the strings and separators into the result
    int current_pos;
    
    current_pos = 0;
    i = 0;
    while (i < size) 
    {
        int j;
        
        j = 0;
        // Copy the current string to result
        while (strs[i][j] != '\0') 
        {
            result[current_pos++] = strs[i][j++];
        }

        // Add the separator if it's not the last string
        if (i < size - 1) 
        {
            j = 0;
            while (sep[j] != '\0') 
            {
                result[current_pos++] = sep[j++];
            }
        }
        i++;
    }

    // Null terminate the result string
    result[current_pos] = '\0';

    return (result);
}
