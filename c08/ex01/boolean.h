/*
• Create a ft_boolean.h file. It’ll compile and run the following main appropriately
:
#include "ft_boolean.h"
void ft_putstr(char *str)
{
while (*str)
write(1, str++, 1);
}
t_bool ft_is_even(int nbr)
{
return ((EVEN(nbr)) ? TRUE : FALSE);
}
int main(int argc, char **argv)
{
(void)argv;
if (ft_is_even(argc - 1) == TRUE)
ft_putstr(EVEN_MSG);
else
ft_putstr(ODD_MSG);
return (SUCCESS);
}
• This program should display
I have an even number of arguments.
• ou
I have an odd number of arguments.
*/

#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H

#include <unistd.h>

// Define the boolean type
typedef int t_bool;

// Define the boolean values
#define TRUE 1
#define FALSE 0

// Define macro to check if a number is even
#define EVEN(nbr) ((nbr) % 2 == 0 ? 1 : 0)

// Define macros for success and message strings
#define SUCCESS 0
#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"

#endif

#include "ft_boolean.h"

void ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

t_bool ft_is_even(int nbr)
{
    return (EVEN(nbr) ? TRUE : FALSE);
}

int main(int argc, char **argv)
{
    (void)argv;  // We are not using argv in this case

    if (ft_is_even(argc - 1) == TRUE)
        ft_putstr(EVEN_MSG);  // Print "I have an even number of arguments."
    else
        ft_putstr(ODD_MSG);  // Print "I have an odd number of arguments."

    return (SUCCESS);
}


