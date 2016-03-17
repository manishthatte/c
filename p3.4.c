#include "details.h"
#include <stdio.h>

int main(void)
{
    printf("Please enter a floating point number: \n");
    float f;
    scanf("%f", &f);
    printf("f in terms of floating-point value = %f\n", f);
    printf("f in terms of exponential notation = %e\n", f);
    printf("f in terms of fixed point notation = %.2f\n", f);
    printf("f in terms of p notation = %p\n", f);

    printf("Please enter your age in years:\n");
    int age;
    scanf("%d", &age);
    printf("Your age in seconds is %f\n", age*3.156E7);

    printf("Please enter the amount of water in quarts:\n");

    float mol;
    scanf("%f", &mol);
    printf("The number of molecules in %f quarts of water is %e\n",
           mol, (mol*(950 / 3.0E-23)));

    details();
    return 0;
}
