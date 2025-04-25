/*
• Create a macro ABS which replaces its argument by it absolute value :
#define ABS(Value)
*/

#include <unistd.h>

#define ABS(Value) ((Value) < 0 ? -(Value) : (Value))

// Function to convert an integer to string and print
void ft_putnbr(int n) 
{
    char c;
    
    if (n == 0) 
    {
        write(1, "0", 1);
        return;
    }
    
    if (n < 0) 
    {
        write(1, "-", 1);  // Write minus sign for negative numbers
        n = -n;
    }

    // Convert integer to string and print
    if (n >= 10) 
    {
        ft_putnbr(n / 10);  // Recursively print the digits
    }

    c = (n % 10) + '0';  // Convert digit to character
    write(1, &c, 1);
}

int main() {
    int num1 = -5;
    int num2 = 10;
    int num3 = 0;

    // Print the absolute values using write (ft_putnbr for the output)
    write(1, "The absolute value of -5 is: ", 27);
    ft_putnbr(ABS(num1));  // Absolute value of num1
    write(1, "\n", 1);

    write(1, "The absolute value of 10 is: ", 27);
    ft_putnbr(ABS(num2));  // Absolute value of num2
    write(1, "\n", 1);

    write(1, "The absolute value of 0 is: ", 26);
    ft_putnbr(ABS(num3));  // Absolute value of num3
    write(1, "\n", 1);

    return (0);
}
