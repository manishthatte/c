#include "details.h"
#include <stdio.h>
#define FACTOR 60

int main(void)
{
    printf("Please enter value of time in "
           "seconds to be converted (0 to quit):\n");
    int second; int hour; int minute;
    scanf("%d", &second);
    while(second > 0)
        {
            minute = second / FACTOR;
            hour = minute / FACTOR;
            seconds = second - (minute*FACTOR) - (hour*FACTOR*FACTOR);

            printf("The given value of %d seconds translates to "
                    "%d hours and %d minutes.\n",
                    second, hour, minute);

            printf("Please enter value of time in "
                    "seconds to be converted (0 to quit):\n");
            scanf("%d", &second);
        }
        details();
        return 0;

}
