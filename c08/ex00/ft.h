/*
• Create your ft.h file.
• It contains all prototypes of functions :
void ft_putchar(char c);
void ft_swap(int *a, int *b);
void ft_putstr(char *str);
int ft_strlen(char *str);
int ft_strcmp(char *s1, char *s2)
*/

#include "ft.h"
#include <unistd.h>

// Example function to output a character
void ft_putchar(char c) {
    write(1, &c, 1);
}

// Example function to swap two integers
void ft_swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Example function to output a string
void ft_putstr(char *str) {
    while (*str) {
        ft_putchar(*str);
        str++;
    }
}

// Example function to return the length of a string
int ft_strlen(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Example function to compare two strings lexicographically
int ft_strcmp(char *s1, char *s2) {
    while (*s1 && *s2) {
        if (*s1 != *s2) {
            return (*s1 - *s2);
        }
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

// Main function for testing
int main() {
    char str[] = "Hello, world!";
    ft_putstr(str);  // Print string
    write(1, "\n", 1);  // New line
    
    int len = ft_strlen(str);
    ft_putchar('L');
    ft_putchar('e');
    ft_putchar('n');
    ft_putchar(':');
    write(1, " ", 1);
    ft_putchar(len + '0');  // Print length as character
    write(1, "\n", 1);

    return 0;
}
