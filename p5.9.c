#include "details.h"
#include <stdio.h>

void Temperatures(double degreesF);

int main(void)
{
    printf("This program converts a given temperature from "
           "Fahrenheit scale to Celsius and Absolute scale.\n");
    printf("Please enter temperature to convert in Fahrenheit:\n");
    double F;
    while(scanf("%lf", &F) == 1)
    {
        Temperatures(F);

        printf("Do you want to convert any more temperatures?"
               "(Please enter temperature or q to quit)\n:");
    }
    details();
    return 0;
}

void Temperatures(double degreesF)
{
    double C, K;
    C = (5.0 / 9.0)*(degreesF - 32.0);
    K = C + 273.16;
    printf("Fahrenheit = %lf, Celsius = %lf, Kelvin = %lf\n\n", degreesF, C, K);
    return 0;
}
