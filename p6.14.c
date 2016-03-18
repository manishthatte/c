#include "details.h"
#include <stdio.h>

int main(void)
{
    const int SIZE = 8;
    printf("This program creates 2 arrays and does kungfu with them :).\n");
    double arr1[SIZE], arr2[SIZE]; int i;
    printf("Please enter 8 values for the first array:\n");
    for(i = 0; i < SIZE; i++)
        scanf("%lf", &arr1[i]);
    for(i = 0; i < SIZE; i++)
        printf("These are the values entered: %lf \n", arr1[i]);
    for(i = 0; i < SIZE; i++)
    {
        arr2[i] = arr2[i-1] + arr1[i];
    }
    for (i = 0; i < SIZE; i++)
    {
        printf("The cumulative total in 2nd array for element %d "
               "is %lf\n", i, arr2[i]);
    }


    details();
    return 0;
}
