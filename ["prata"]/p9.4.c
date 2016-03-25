#include "details.h"

double hm(double a, double b);

int main(void)
{
    puts("Please enter the two numbers for calculating harmonic mean:");
    double x; double y;
    scanf("%lf %lf", &x, &y);
    printf("Harmonic mean for %lf and %lf is %lf\n", x, y, hm(x, y));
    details();
}

double hm(double a, double b)
{
    double h = 0;
    h = (2*a*b)/(a+b);
    return h;
}
