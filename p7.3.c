#include "details.h"
#include <stdio.h>

int main(void)
{
    printf("This program sorts entered integers into even and odd types"
           " and calculates their totals.\n");
    printf("Please enter integers to be analyzed(0 to quit):\n");
    int n; int odd = 0; int even = 0; float total_even = 0; float total_odd = 0;
    float avg_even = 0; float avg_odd = 0; int n_even = 0; int n_odd = 0;

    while(scanf("%d", &n) != 0 && (n != 0))
    {
        if(n % 2 == 0)
        {
            n_even++;
            total_even += n;
        }
        else
        {
            n_odd++;
            total_odd += n;
        }
    }
    printf("No. of even integers = %d, their total = %d and their average = %f.\n",
               n_even, total_even, total_even / n_even);
    printf("No. of odd integers = %d, their total = %d and their average = %f.\n",
               n_odd, total_odd, total_odd / n_odd);
    details();
    return 0;

}
