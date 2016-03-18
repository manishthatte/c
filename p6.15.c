#include "details.h"
#include <stdio.h>
#define SIZE 255

int main(void)
{
    char arr[SIZE]; int j;
    printf("This program reverses an inputed line of words.\n");
    printf("Please enter the line:\n");

    for(j = 0; j < SIZE; j++)
    {
        scanf("%c", &arr[j]);
    }
    printf("The reversed line is:\n");
    for(j = SIZE; j >= 0; j--)
    {

        printf("%c", arr[j]);
    }
    printf("\n");
    details();
    return 0;
}
