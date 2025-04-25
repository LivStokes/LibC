/*
• We’re dealing with a program here, you should therefore have a function main in
your .c file.
• Create a program that displays its own name.
*/

#include <unistd.h>

int main(int argc, char *argv[]) 
{
    const char *str;

    *str = argv[0];
    if (argc > 0) 
    {
        while (*str) 
        {
            write(1, str, 1); // write one character at a time to stdout
            str++;
        }
        write(1, "\n", 1); // newline at the end
    }
}