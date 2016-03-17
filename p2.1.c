//printf practice
#include <stdio.h>
#include "personal_details.h"

int jolly();
int deny();
int br();
int ic();
int smile();

int main(void)
{
    printf("Gustav Mahler\n");
    printf("Gustav\nMahler\n");
    printf("Mahler Gustav\n");
    int years = 42; int days = years*365;
    printf("Age is %d years %d days\n", years, days);
    jolly();
    jolly();
    jolly();
    deny();

    br();
    printf(", ");
    ic();

    printf("\n");
    ic();
    printf(",\n");
    br();
    printf("\n");
    int x = 3; int y = 3;
    for (x = 3; x > 0; x--)
    {
        for (y = 3; y > 0; --y)
            smile();
            printf("\n");

    }

    //printf("\n");


    details();
    return 0;
}

int jolly()
{
    printf("For he's a jolly good fellow!\n");
}

int deny()
{
    printf("Which nobody can deny!\n");
}

int br()
{
    printf("Brazil, Russia");
}

int ic()
{
    printf("India, China");
}

int smile()
{
    printf("Smile!");
}
