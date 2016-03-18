#include "details.h"
#include <stdio.h>

long sum_squares(int x, int y);

int main(void)
{
    printf("This program calculates the sum of "
           "all integer squares in a range.\n");
    printf("Please enter the lower and the upper integer of the range:\n"
           "(q to quit):\n");
    int m, n;
    while(scanf("%d %d", &m, &n) == 2)
    {
        printf("The sum of squares for all integers within the "
           "limit %d and %d is %ld\n", m, n, sum_squares(m, n));

        printf("Please enter the lower and the upper integer of the range:\n"
           "(q to quit):\n");
    }
    printf("Done!");
    details();
    return 0;
}

long sum_squares(x, y)
{
    long z;
    for(x; x <= y; x++)
    {
        z += (x*x);
    }
    return z;
}
