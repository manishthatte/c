#include "details.h"
#include <stdio.h>

int main(void)
{
    printf("This program prints squares and cubes of a"
           " range of integers.\n");
    printf("Please enter upper and lower limits of the range:");
    int upper; int lower;
    scanf("%d %d", &upper, &lower);
    int i;
    for(i = lower; i <= upper; i++)
    {
        long square; long cube;
        square = i * i;
        cube = i * i * i;
        printf("The square and cubes of %d are: %ld and %ld\n",
               i, square, cube);
    }
    details();

    return 0;
}
