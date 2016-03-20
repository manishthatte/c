#include "details.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

#define RATEARTI 2.05
#define RATEBEET 1.15
#define RATECARR 1.09
#define DISC 0.05
#define SLAB$ 100
#define SHIP1 6.5
#define SLAB1 5
#define SHIP2 14
#define SLAB2 20
#define SHIP3 0.50

int main(void)
{
{
printf("This is a small grocery management program.\n");

float artichokeQ = 0; float beetQ = 0; float carrotQ = 0; float tempQ = 0;
float discount = 0; float shipping = 0; float artichokeC = 0; float beetC = 0;
float carrotC = 0; float total = 0; float quantity = 0; int choice;
bool isChoice = false; float grand_total = 0;

printf("******************************************************\n");
printf("************************MENU**************************\n");
printf("****Please select what you want to buy (q to quit)****\n");
printf("**********1) Artichokes***********2) Beets************\n");
printf("**********3) Carrots**************q) Quit*************\n");
printf("******************************************************\n");
printf("******************************************************\n");



while(((scanf("%d", &choice)) == 1) && (choice != '\n'))
{
    start:
    switch("%d", choice)
    {
        case 1:     isChoice = true;
                    printf("Please enter Quantity of Artichokes:");
                    scanf("%f", &tempQ);
                    artichokeQ += tempQ;
                    isChoice = false;
                    break;
        case 2:     isChoice = true;
                    printf("Please enter Quantity of Beets:");
                    scanf("%f", &tempQ);
                    beetQ += tempQ;
                    isChoice = false;
                    break;
        case 3:     isChoice = true;
                    printf("Please enter Quantity of Carrots:");
                    scanf("%f", &tempQ);
                    carrotQ += tempQ;
                    isChoice = false;
                    break;
        case 'q':   isChoice = true;
                    printf("Proceed to checkout and payment.");
                    goto end;
                    isChoice = false;

        default:    printf("%d is not a valid choice.\n", choice);
    }
    choice = 0;
    printf("What Do you wish to buy more? (Enter 1, 2 or 3 for yes, q to quit)\n:");

    while((scanf("%d", &choice) == 1) && (choice != '\n') && (choice != 'q'))
    goto start;
}
    end:
        if((artichokeQ != 0) || (beetQ != 0) || carrotQ != 0)
    {
    artichokeC = (RATEARTI*artichokeQ);
    beetC = (RATEBEET*beetQ);
    carrotC = (RATECARR*carrotQ);
    total = (artichokeC+beetC+carrotC);
    quantity = (artichokeQ+beetQ+carrotQ);
    if (total > SLAB$)
        discount = (total*DISC);
    else if(total <= SLAB$)
        discount = 0;
    if (quantity <= SLAB1)
        shipping = (quantity*SHIP1);
    else if ((quantity > SLAB1) && (quantity <= SLAB2))
        shipping = (SHIP2);
    else
        shipping = (SHIP2+(SHIP3*(quantity-SLAB2)));
    grand_total = (total - discount + shipping);

        printf("Your net purchases are:\n");
        printf("***Item******Rate******Quantity******Total\n");
        printf("Artichokes: %0.2f      %0.2f         %0.2f\n", RATEARTI, artichokeQ, artichokeC);
        printf("Beets     : %0.2f      %0.2f         %0.2f\n", RATEBEET, beetQ, beetC);
        printf("Carrots   : %0.2f      %0.2f         %0.2f\n", RATECARR, carrotQ, carrotC);
        printf("Grand total %0.2f\n", grand_total);
        printf("Where Cost of item = %0.2f, Discount = %0.2f and Shipping = %0.2f\n", total, discount, shipping);
    }
}
details();
return 0;
}
