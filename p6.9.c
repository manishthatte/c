#include "details.h"
#include <stdio.h>

int kungfu(float m, float n);

int main(void)
{
    printf("This program takes 2 floating-point numbers and prints "
           "the value of their difference divided by their product.\n");
    printf("Please enter first and second numbers (Enter q to quit):\n");
    float x; float y;
    while(scanf("%f %f", &x, &y) == 2)
    {
        kungfu(x, y);

        printf("Please enter first and second numbers if you wish to "
               "calculate some more (Enter q to quit):\n");
        scanf("%f %f", &x, &y);
    }
    details();
    return 0;
}

int kungfu(float m, float n)
{
    if (m > n)
        {
            printf("The result is %f\n", (m-n) / (m*n));
        }
        else
        {
            printf("The result is %f\n", (n-m) / (m*n));
        }

}
