#include "details.h"
#include <stdio.h>
#include <math.h>

int main(void)
{
    const int SIZE = 8;
    printf("This program creates an 8 element array of 2 raised to n.\n");
    int arr[SIZE]; int i;
    for(i = 1; i < SIZE; i++)
    {
        arr[i] = pow(2, i);
    }
    i = 1;
    do
    {
        printf("%d ", arr[i]);
        i++;
    }while (i < SIZE);
    printf("\n");
    details();
    return 0;
}
