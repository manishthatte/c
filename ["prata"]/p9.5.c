#include "details.h"

void larger_of(double *x, double *y);

int main(void)
{
    puts("Enter 2 numbers:");
    double m, n;
    scanf("%lf %lf", &m, &n);
    larger_of(&m, &n);
    printf("Now the two numbers are %lf and %lf\n", m, n);
    details();
    return 0;
}

void larger_of(double *x, double *y)
{
    *x = *y = ((*x > *y) ? *x : *y);
}
