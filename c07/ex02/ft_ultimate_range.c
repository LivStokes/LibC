/*
• Create a function ft_ultimate_range which allocates and assigns an array of ints.
This int array should contain all values between min and max.
• Min included - max excluded.
• Here’s how it should be prototyped :
int ft_ultimate_range(int **range, int min, int max);
• The size of range should be returned (or -1 on error).
• If the value of min is greater or equal to max’s value, range will point on NULL
and it should return 0.
*/

#include <stdlib.h>  // For malloc

// Function to create an array with values from min (inclusive) to max (exclusive)
int ft_ultimate_range(int **range, int min, int max) {
    // If min >= max, set range to NULL and return 0
    if (min >= max) 
    {
        *range = NULL;
        return 0;
    }

    // Calculate the size of the array
    int size = max - min;

    // Allocate memory for the array
    *range = (int *)malloc(size * sizeof(int));
    if (*range == NULL) 
    {
        return -1;  // Return -1 if memory allocation fails
    }

    // Use a while loop to fill the array with values from min to max - 1
    int i = 0;
    while (min < max) 
    {
        (*range)[i] = min;
        min++;
        i++;
    }

    // Return the size of the array
    return size;
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
