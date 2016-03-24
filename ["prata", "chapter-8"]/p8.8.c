#include "details.h"
#include <stdlib.h>

int main(void)
{
    char ch; float x = 0.0; float y = 0.0; float result = 0.0;

    printf("This is a simple arithmetic calculator program.\n");

    start:

    printf("Please select type of operation you want to perform:\n");
    printf("**************************************\n");
    printf("a) Addition          s) Subtraction\n");
    printf("m) Multiplication    d) Division\n");
    printf("q) Quit                         \n");
    printf("**************************************\n");

    while(ch = getchar())
    {
        if(ch == '\n')
        continue;

        switch(ch)
            {
                case 'a':   printf("Now enter the 2 numbers which you want to add:\n");
                            scanf("%f %f", &x, &y); result = x+y;
                            printf("The answer is %f\n", result); break;
                case 's':   printf("Now enter the 2 numbers which you want to subtract:\n");
                            scanf("%f %f", &x, &y); result = x-y;
                            printf("The answer is %f\n", result); break;
                case 'm':   printf("Now enter the 2 numbers which you want to multiply:\n");
                            scanf("%f %f", &x, &y); result = x*y;
                            printf("The answer is %f\n", result); break;
                case 'd':   printf("Now enter the 2 numbers which you want to divide:\n");
                            scanf("%f %f", &x, &y); result = x/y;
                            printf("The answer is %f\n", result); break;

                case 'q': printf("Thanks for your time. GoodBye!\n"); details(); exit(0);

                default : puts("Please select only from the given options.");
            }

        break;
    }
    goto start;
    return 0;
}
