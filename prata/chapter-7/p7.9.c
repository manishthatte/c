#include <stdio.h>
#include <stdbool.h>
#include "details.h"

int main(void)
{
    printf("This program calculates all the prime numbers till "
           "a given positive integer.\n");
    printf("Please enter the integer to be analyzed (q to quit):\n");

    int n; int i; int div; bool isPrime;
    while (scanf("%d", &n) == 1 && n > 0)
    {
        if (n > 1)
            printf("Here are the prime numbers up to %d\n", n);
        else
            printf("No primes.\n");
        for (i = 2; i <= n; i++)
        {
            for(div = 2, isPrime = true; (div*div) <= i; div++)
            {
                if(i % div == 0)
                    isPrime = false;
            }
            if(isPrime)
                printf("%d is prime.\n", i);
        }
        printf("Enter a positive integer (q to quit): \n");
    }
    printf("Done!\n");
    details();
    return 0;
}
