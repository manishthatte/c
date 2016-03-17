#include "details.h"
#include <stdio.h>

int height(void);

int main(void)
{
    height();
    details();
    return 0;
}

int height(void)
{
    printf("Please enter the height (in cm) "
           "to be converted to feet and inches (-ve number to quit): \n");
    float cm, inch; int foot;
    scanf("%f", &cm);
    while(cm >= 0)
    {
    inch = cm / 2.54;
    foot = inch / 12;
    printf("%f cm = %d feet, %.2f inches\n", cm, foot, inch);
    printf("Please enter the height (in cm) "
           "to be converted to feet and inches (-ve number to quit): \n");
    scanf("%f", &cm);
    }
}
