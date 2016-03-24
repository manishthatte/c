#include "details.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define BASIC1 8.75
#define BASIC2 9.33
#define BASIC3 10.00
#define BASIC4 11.20
#define OT_RATE 1.5
#define TAX_RATE1 0.15
#define SLAB1 300
#define TAX_RATE2 0.20
#define SLAB2 150
#define TAX_RATE3 0.25
#define HMIN 40

char get_options()
{
    char ch; char choice; bool validChoice; float BASIC;
    printf("Enter the letter corresponding to the desired pay rate (in $/hr) or action (e to quit):\n");
    printf("a) $8.75/hr    b) $9.33/hr\n");
    printf("c) $10.00/hr   d) $11.20/hr\n");
    printf("e) quit\n");

    validChoice = false;
    while(!validChoice)
    {
        choice = getchar();


        switch(choice)
        {
            case 'a': BASIC = BASIC1; validChoice = true; break;
            case 'b': BASIC = BASIC2; validChoice = true; break;
            case 'c': BASIC = BASIC3; validChoice = true; break;
            case 'd': BASIC = BASIC4; validChoice = true; break;
            case 'e': exit(0); //break;
            default:  printf("Please enter from the above selections only.\n");
        }
        while(getchar() != '\n')
            continue;
    }

    return BASIC;
}

int main(void)
{
    printf("This program calculates the gross pay, taxes and net pay.\n");
    //get_options();
    float BASIC = get_options();
    printf("Please input the hours worked in the week:\n");
    int hr; float gross; float tax; float net;
    scanf("%d", &hr);
    if(hr <= HMIN)
    {
        gross = (BASIC*hr);
    }
    else
    {
        gross = (BASIC*HMIN) + OT_RATE*(hr - HMIN);
    }
    if(gross <= SLAB1)
    {
        tax = (TAX_RATE1*gross);
        net = (gross - tax);
    }
    else if(gross <= SLAB2)
    {
        tax = (TAX_RATE1*SLAB1) + (TAX_RATE2*(gross-SLAB1));
        net = (gross - tax);
    }
    else
    {
        tax = (TAX_RATE1*SLAB1) + (TAX_RATE2*(SLAB2)) + (TAX_RATE3*(gross - SLAB1 - SLAB2));
        net = (gross - tax);
    }
    printf("Thus we calculate gross = %.2f, tax = %.2f and net pay = %.2f\n", gross, tax, net);
    details();
    return 0;
}
