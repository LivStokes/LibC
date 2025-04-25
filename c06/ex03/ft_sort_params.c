/*
We’re dealing with a program here, you should therefore have a function main in
your .c file.
• Create a program that displays its given arguments sorted by ascii order.
• It should display all arguments, except for argv[0].
• One argument per line.
*/


#include <unistd.h>

// Function to compare two strings by ASCII order
int str_cmp(char *s1, char *s2) 
{
    int i;
    
    i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i]) 
    {
        i++;
    }
    return (s1[i] - s2[i]);
}

// Function to get the length of a string
int str_len(char *str) 
{
    int i; 
    i = 0;
    while (str[i]) 
    {
        i++;
    }
    return (i);
}

int main(int argc, char *argv[]) {
    int i;
    int j;
    char *temp;

    i = 0;
    // Simple bubble sort using only while loops
    while (i < argc - 1) 
    {
        j = 1;
        while (j < argc - i) 
        {
            if (str_cmp(argv[j], argv[j + 1]) > 0) 
            {
                temp = argv[j];
                argv[j] = argv[j + 1];
                argv[j + 1] = temp;
            }
            j++;
        }
        i++;
    }

    // Print sorted arguments
    i = 1;
    while (i < argc) 
    {
        write(1, argv[i], str_len(argv[i]));
        write(1, "\n", 1);
        i++;
    }
    return 0;
}
