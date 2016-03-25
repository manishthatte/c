#include "details.h"

void kungfu(double *x, double *y, double *z);
void sort2(double *m, double *n);

int main(void)
{
    puts("Please enter 3 numbers:");
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    kungfu(&a, &b, &c);
    printf("Now the values are a = %lf, b = %lf and c = %lf"
           "\n", a, b, c);
    details();
    return 0;
}

void sort2(double *m, double *n)
{
    int t;
    if(*m > *n)
    {
        t = *m;
        *m = *n;
        *n = t;
    }
}
void kungfu(double *x, double *y, double *z)
{
    sort2(x, y);
    sort2(x, z);
    sort2(y, z);
}
