#include "details.h"
#include <stdio.h>

int main(void)
{
    printf("This program replaces each period with ! and each ! with !!.\n");
    printf("Please enter text to be modified:\n");
    char ch; int n_dot = 0; int n_ex = 0;
    while((ch = getchar()) != '#')
    {
        if(ch != '.' && ch != '!')
        {
            putchar(ch);
        }
        else if(ch == '!')
        {
            n_ex++;
            putchar('!');
            putchar('!');
        }
        else
        {
            n_dot++;
            putchar('!');
        }
    }
    printf("There were %d exclamation marks and "
           "%d periods in the input.\n", n_ex, n_dot);
    printf("\n");
    details();
    return 0;
}
