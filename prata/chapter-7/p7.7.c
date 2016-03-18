#include "details.h"
#include <stdio.h>

#define BASIC 10
#define OT 15
#define TAX_RATE1 0.15
#define SLAB1 300
#define TAX_RATE2 0.20
#define SLAB2 150
#define TAX_RATE3 0.25
#define HMIN 40
int main(void)
{
    printf("This program calculates the gross pay, taxes and net pay.\n");
    printf("Please input the hours worked in the week:\n");
    int hr; float gross; float tax; float net;
    scanf("%d", &hr);
    if(hr <= HMIN)
    {
        gross = (BASIC*HMIN);
    }
    else
    {
        gross = (BASIC*HMIN) + OT*(hr - HMIN);
    }
    if(gross <= SLAB1)
    {
        tax = (TAX_RATE1*SLAB1);
        net = (gross - tax);
    }
    else if(gross <= SLAB2)
    {
        tax = (TAX_RATE1*SLAB1) + (TAX_RATE2*(gross-SLAB1));
        net = (gross - tax);
    }
    else
    {
        tax = (TAX_RATE1*SLAB1) + (TAX_RATE2*(gross-SLAB1)) + (TAX_RATE3*(gross - SLAB1 - SLAB2));
        net = (gross - tax);
    }
    printf("Thus we calculate gross = %.2f, tax = %.2f and net pay = %.2f\n", gross, tax, net);
    details();
    return 0;
}
