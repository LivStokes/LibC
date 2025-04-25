/*
Create a function that displays the content of the array created by the previous
function.
• Here’s how it should be prototyped :
void ft_show_tab(struct s_stock_str *par);
• The structure will be the same as the previous exercise and will be defined in the
ft_stock_str.h file
• For each element, we’ll display:
◦ the string followed by a ’\n’
◦ the size followed by a ’\n’
◦ the copy of the string (that could have been modified) followed by a ’\n’
• We’ll test your function with our ft_strs_to_tab (previous exercise). Make it
work according to this !
*/

#ifndef FT_STOCK_STR_H
#define FT_STOCK_STR_H

typedef struct s_stock_str
{
    int size;       // length of the string
    char *str;      // original string
    char *copy;     // copy of the string
} t_stock_str;

#endif

#include "ft_stock_str.h"
#include <unistd.h>

void ft_putstr(char *str)
{
    while (*str)
    {
        write(1, str, 1);  // Write one character at a time
        str++;
    }
}

void ft_putnbr(int nb)
{
    char c;
    if (nb >= 10)
        ft_putnbr(nb / 10);  // Recursively call for digits greater than 9
    c = nb % 10 + '0';
    write(1, &c, 1);  // Write the digit
}

void ft_show_tab(struct s_stock_str *par)
{
    int i = 0;
    
    // Iterate through the array of structures until the end (when str is NULL)
    while (par[i].str != NULL)
    {
        // Display the original string
        ft_putstr(par[i].str);
        write(1, "\n", 1);  // Write a newline
        
        // Display the size of the string
        ft_putnbr(par[i].size);
        write(1, "\n", 1);  // Write a newline
        
        // Display the copy of the string
        ft_putstr(par[i].copy);
        write(1, "\n", 1);  // Write a newline
        
        i++;
    }
}

#include "ft_stock_str.h"
#include <unistd.h>
#include <stdlib.h>

// Function to calculate the length of a string
int ft_strlen(char *str)
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}

// Function to duplicate a string (copy it)
char *ft_strdup(char *src)
{
    int len = ft_strlen(src);
    char *copy = (char *)malloc((len + 1) * sizeof(char)); // +1 for null-terminator
    if (copy == NULL)
        return NULL;  // Return NULL if malloc fails
    
    int i = 0;
    while (i < len)  // Using while loop to copy the string
    {
        copy[i] = src[i];
        i++;
    }
    copy[len] = '\0';  // Null-terminate the copied string
    return copy;
}

// Function to transform the array of strings into an array of structures
struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    t_stock_str *tab;
    int i = 0;

    // Allocate memory for the array of structures
    tab = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str)); // +1 for the terminating NULL element
    if (tab == NULL)
        return NULL;  // Return NULL if malloc fails

    // Using a while loop instead of a for loop
    while (i < ac)
    {
        tab[i].size = ft_strlen(av[i]);  // Set the size
        tab[i].str = av[i];              // Set the original string
        tab[i].copy = ft_strdup(av[i]);  // Create a copy of the string
        if (tab[i].copy == NULL)
        {
            free(tab);  // Free the allocated memory in case of error
            return NULL;
        }
        i++;
    }

    tab[i].str = NULL;  // Set the last element's str to NULL to mark the end
    return tab;
}

int main(int argc, char **argv)
{
    struct s_stock_str *tab = ft_strs_to_tab(argc - 1, &argv[1]);
    if (tab != NULL)
    {
        ft_show_tab(tab);  // Call the function to display the content of the tab

        // Free allocated memory
        int i = 0;
        while (tab[i].str != NULL)
        {
            free(tab[i].copy);  // Free the copy of each string
            i++;
        }
        free(tab);  // Free the array of structures
    }
    return 0;
}

