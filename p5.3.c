#include "details.h"
#include <stdio.h>

int days_to_weeks(void);

int main(void)
{
    days_to_weeks();
    details();
    return 0;
}

int days_to_weeks(void)
{
    printf("Please enter the number of days to convert into weeks (0 to quit).\n");
    int week, day, balance;
    scanf("%d", &day);
    while(day > 0)
    {
        week = day / 7;
        balance = day % 7;
        printf("%d days is translated to %d weeks and %d days\n", day, week, balance);
        printf("Please enter the number of days to convert into weeks (0 to quit).\n");
        scanf("%d", &day);
    }

}
