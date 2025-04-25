/*
• We’re dealing with a program here, you should therefore have a function main in
your .c file.
• Create a program that displays its given arguments.
• One per line, in the reverse order of the command line.
• It should display all arguments, except for argv[0].
*/
#include <unistd.h>

// Function to calculate length of a string
int str_len(char *str) 
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    { 
        i++;
    }
    return len;
}

int main(int argc, char *argv[]) 
{
    int i;

    i = argc;
    argc - 1;
    while (i > 0)
    {
        int len;
        len = strlen(argv[i]);
        write(1, argv[i], len);
        write(1, "\n", 1);
        i--;
    }
    return 0;
}
