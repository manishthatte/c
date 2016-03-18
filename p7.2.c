#include "details.h"
#include <stdio.h>

int main(void)
{
    printf("This program reads characters and outputs them with their"
           "ASCII code.\n");
    printf("Please enter your characters (# to quit):\n");
    char ch;
    while((ch = getchar())  != '#')
    {
        int n;
        n++;
        if(n % 8 == 0)
            printf("\n");

        printf("%c is %d, ", ch, ch);
    }
    details();
    return 0;
}
