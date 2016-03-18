#include "details.h"
#include <stdio.h>

int main(void)
{
    printf("This program reads 8 integers "
           "into an array and prints them in reverse order:\n");
    int arr[8]; int i; int j;
    for(i = 0; i < 8; i++)
    {
        printf("Please input Integer No. %d:\n", (i+1));
        scanf("%d", &arr[i]);
    }
    printf("Here are the integers in reverse order:\n");
    for(j = 7; j >=0; j--)
    {
        printf("%d", arr[j]);
    }
    printf("\n");
    details();

    return 0;
}
