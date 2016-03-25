#include "details.h"

double imin(double m, double n);

int main(void)
{
    puts("Please input 2 integers you want to compare:");
    double x, y;
    scanf("%lf %lf", &x, &y);
    printf("The lesser of the 2 given values is %lf\n", imin(x, y));
    details();
}

double imin(double m, double n)
{
     return((m > n)? n : m);
}
