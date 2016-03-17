//print table of integer, its square and its cube

#include <stdio.h>
int main(void)
{
printf("Please enter lower limit integer number: ");
long low_num; long high_num;
scanf("%ld", &low_num);
printf("Please enter upper limit integer number: ");
scanf("%ld", &high_num);
long x;
printf("Number\tsquare\tcube\n");
for(x = low_num; x <= high_num; x++)
    printf("%ld\t%ld\t%ld\n", x, x*x, x*x*x);
    return 0;
}
