#include "details.h"
#include <stdio.h>

int sum_squares(void);

int main(void)
{
    sum_squares();
    details();
    return 0;
}

int sum_squares(void)
{
    printf("Please input a positive integer "
           "to calculate the sum of its squares (q to quit):\n");
    long n, i, square = 0; long sum_square = 0;

    while(scanf("%ld", &n) == 1)
    {
        for(i = 0; i <= n; i++)
        {
            square = i * i;
            sum_square += square;
        }
    printf("The total of n squares i.e. summation(n*n) = %ld\n", sum_square);
    n = 0; i = 0; sum_square = 0; square = 0;
    printf("Please input a positive integer "
            "to calculate the sum of its squares (q to quit):\n");
    }

}
