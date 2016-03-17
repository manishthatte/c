#include "details.h"
#include <stdio.h>

int main(void)
{
    float cup = 0.0; float pint = 0.0; float ounce = 0.0; float tablespoon = 0.0; float teaspoon = 0.0;

    printf("Please input the quantity of volume to be converted (in cups):\n");
    scanf("%f", &cup);
    pint = 2.0*cup;
    ounce = (1.0/8.0)*cup;
    tablespoon = (1.0/2.0)*ounce;
    teaspoon = (1.0/3.0)*tablespoon;


    printf("The volume as measured in:\n");

    printf("Pints is %0.2f\n", pint);
    printf("Ounces is %0.2f\n", ounce);
    printf("tablespoons is %0.2f\n", tablespoon);
    printf("teaspoons is %0.2f\n", teaspoon);
    details();
    return 0;
}
