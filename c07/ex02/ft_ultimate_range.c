#include <stdlib.h> 

int ft_ultimate_range(int **range, int min, int max) 
{
    int size;
    int i;

    size = 0;
    i = 0;
    if (min >= max) 
    {
        *range = NULL;
        return 0;
    }
    size = max - min;
    *range = (int *)malloc(size * sizeof(int));
    if (*range == NULL) 
        return -1;
    while (min < max) 
    {
        (*range)[i] = min;
        min++;
        i++;
    }
    return (size);
}


#include <unistd.h>  // For write
#include <stdlib.h>  // For free

// Function to write an integer to standard output (as a string)
void ft_putnbr(int n) 
{
    char c;

    if (n >= 10) 
    {
        ft_putnbr(n / 10);  // Recursively handle the digits
    }
    c = (n % 10) + '0';  // Convert integer to character
    write(1, &c, 1);      // Write the character to stdout
}

// Function to display the range array
void display_range(int *range, int size) {
    int i;
    
    i = 0;
    while (i < size) 
    {
        ft_putnbr(range[i]);
        write(1, " ", 1);  // Print a space after each number
        i++;
    }
    write(1, "\n", 1);  // Print a newline at the end
}

int main() 
{
    int *range = NULL;
    int min = 5;
    int max = 10;

    // Call ft_ultimate_range to create the range array
    int size = ft_ultimate_range(&range, min, max);

    // Check if the function was successful
    if (size == -1) 
    {
        write(1, "Memory allocation failed!\n", 25);
    } 
    else if (size == 0) 
    {
        write(1, "Invalid range (min >= max)\n", 26);
    } 
    else 
    {
        // Display the range array
        display_range(range, size);
        
        // Free the allocated memory
        free(range);
    }
    return 0;
}
