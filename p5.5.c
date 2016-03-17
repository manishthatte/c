#include "details.h"
#include <stdio.h>

int addmeup(void);

int main(void)
{
    addmeup();
    details();
    return 0;
}

int addmeup(void)
{
    printf("Please input a positive integer "
           "to calculate its summation (q to quit):\n");
    long n, i; long sum = 0;

    while(scanf("%ld", &n) == 1)
    {
        for(i = 0; i <= n; i++)
        {
            sum = i + sum;
        }
    printf("The total of n i.e. summation(n) = %ld\n", sum);
    n = 0; i = 0; sum = 0;
    printf("Please input a positive integer "
                    "to calculate its summation (q to quit):\n");
    }

}
