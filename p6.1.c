#include "details.h"
#include <stdio.h>

int main(void)
{
    const int E = 26;
    printf("This program creates an array with 26 elements "
           "and stores the 26 lowercase letters in it.");

    char arr[E]; int i;
    for(i = 0; i < E; i++)
    {
        arr[i] = 'a' + i;
    }
    for(i = 0; i < E; i++)
        {
            printf("%c", arr[i]);
        }
        printf("\n");

    details();
    return 0;
}
