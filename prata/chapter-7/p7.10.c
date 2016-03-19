#include "details.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define S 17850
#define HH 23900
#define MJ 29750
#define MS 14875

#define TAX1 0.15
#define TAX2 0.28

int main(void)
{
    printf("This program computes tax as per income slab as per category.\n");
    start:
    printf("Please choose your category:\n");
    printf("**************************************************************\n");
    printf("* a) Single            b) Head of Household                  *\n");
    printf("* b) Married, Joint    d) Married, Separate                  *\n");
    printf("* q) Quit                                                    *\n");
    printf("**************************************************************\n");

    char ch; char choice; bool isChoice; float SLAB;
    isChoice = false;
    while(!isChoice)
    {
        choice = getchar();
        switch(choice)
        {
            case 'a': SLAB = S; isChoice = true; break;
            case 'b': SLAB = HH; isChoice = true; break;
            case 'c': SLAB = MJ; isChoice = true; break;
            case 'd': SLAB = MS; isChoice = true; break;
            case 'q': exit(0);
            default: printf("Please select only from the options given above:\n");

        }
        while(getchar() != '\n')
            continue;
    }
    printf("Now enter the annual income in $:\n");
    double income; double tax;
    scanf("%lf", &income);
    if(income > SLAB)
    {
        tax = (SLAB*TAX1)+((income-SLAB)*TAX2);
    }
    if(income <= SLAB)
    {
        tax = SLAB*TAX1;
    }
    printf("Tax for the entered case is $%0.2lf and net income is $%0.2lf\n", tax, (income - tax));
    printf("Do you want to continue calculating? (y for yes, q to quit)\n");
    char option;
    option = getchar();
    if((getchar() == 'y') && (getchar() != 'q'))
    goto start;
    return 0;
}
