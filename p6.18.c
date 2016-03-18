#include "details.h"
#include <stdio.h>
#define DUNBAR 150

int main(void)
{
    int frnds = 5; int week;
    printf("This program finds number of weeks for Rabnud's friends "
           "to exceed Dunbar's number.\n");
    for(week = 1; frnds <= DUNBAR; week++)
    {
        frnds = 2*(frnds - week);
        printf("Frnds at the end of the week = %d.\n", frnds);
    }
    printf("So, it takes %d weeks for the Prof.'s friends to exceed Dunbar's number.\n\n", week);
    details();
    return 0;
}
