#include "details.h"

void fib(int n);

int main(void)
{
    puts("This program calculates Fibonacci series upto n given terms.");
    puts("Please enter the term upto which you want to calculate the series:");
    int n;
    while((scanf("%d", &n)) == 1)
        fib(n);
    details();
    return 0;
}

void fib(int n)
{
    long first = 0, second = 1, next, c;
    printf("First %d terms of the Fibonacci series are: \n", n);
    for(c = 0; c < n; c++)
    {
        if(c <= 1)
            next = c;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d  ", next);
    }
}
