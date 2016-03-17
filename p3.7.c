#include "details.h"
#include <stdio.h>

int main(void)
{
    printf("Please enter your height in inches (q to quit):\n");
    float inches; float cm;

    while(scanf("%f", &inches) == 1)
        {
            printf("Your height of %0.2f in inches is %0.2f in centimeters\n"
               , inches, 2.54*inches);
            printf("Please enter your height in inches (q to quit):\n");
        }
    details();

    return 0;
}
