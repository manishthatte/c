#include "details.h"
#include <stdio.h>

double cubed(double n);

int main(void)
{
    printf("Please enter the number to be cubed:\n");
    double n;
    scanf("%lf", &n);
    cubed(n);

    details();
    return 0;
}

double cubed(double m)
{
    printf("The cube for the entered number %lf is %lf\n", m, m*m*m);
}
