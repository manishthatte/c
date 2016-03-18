#include "details.h"
#include <stdio.h>

int main(void)
{
    int yr; float prin = 1000000; float rate = 0.08;
    int withdraw = 100000;
    while(prin >= 0)
    {
        prin += ((rate * prin) - withdraw);
        yr++;
        printf("Balance amount at the end of year %d is %f.\n", yr, prin);
    }
    printf("So, it takes %d years for Lucky to empty his account.\n", yr);
    details();
    return 0;
}
