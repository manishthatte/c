#include "details.h"
#include <stdio.h>
#include <ctype.h>
#define SPACE ' '
#define NEWLINE '\n'

int main(void)
{
    printf("This program finds the number of spaces, newline characters"
           "\n and other characters in a given input");
    printf("Please enter the input line to be analyzed:\n");
    char ch; int n_space = 0; int nn_line = 0; int n_ch = 0;

    while((ch = getchar()) != '#')
    {

        if(ch == SPACE)
        {
            n_space++;
        }
        else if(ch == NEWLINE)
        {
            nn_line++;
        }
        else
        {
            n_ch++;
        }

    }
    printf("Spaces = %d, Newlines = %d, Other Characters = %d\n",
            n_space, nn_line, n_ch);

    details();
    return 0;
}
