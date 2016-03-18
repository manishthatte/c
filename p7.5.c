#include "details.h"
#include <stdio.h>

int main(void)
{
    printf("This program uses the switch operator.\n");
    printf("Please input the text to be modified:\n");
    char ch; int n_dot = 0; int n_ex = 0;
    while((ch = getchar()) != '#')
    {
        switch(ch)
        {
            case '.': putchar('!'); n_dot++; break;
            case '!': putchar('!'); putchar('!'); n_ex++; break;
            default: putchar(ch);
        }
    }
    printf("There were %d exclamation marks and "
           "%d periods in the input.\n", n_ex, n_dot);
    printf("\n");
    details();
    return 0;
}
