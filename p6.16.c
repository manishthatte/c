#include "details.h"
#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("This program calculates and compares the interest"
           "\nearned by Daphne and Deirdre.\n");
    const int INIT = 100; float deirdre; float daphne; float SIMP = 0.10; float COMP = 0.05; int yr;
    deirdre = INIT;
    daphne = INIT;
    while(deirdre <= daphne)
    {
        deirdre += COMP * deirdre;
        daphne += SIMP * INIT;
        ++yr;
        printf("At the end of year %d, interest on Deirdre's investment = %f\n"
               " and the interest on Daphne's investment = %f\n", yr, deirdre, daphne);

    }

    printf("So, in the year %d, Deirdre's amount is more than Daphne's amount.\n", yr);
    details();
    return 0;
}

