#include "details.h"
#include <stdio.h>
int range(range);

int main(void)
{
    range();
    details();
    return 0;
}

int range(range)
{
    printf("Please enter an integer and the range to print:\n");
    int x, y, z = 0;
    scanf("%d %d", &x, &z);
    y = x + z;
    for(x; x <= y; x++)
        printf("%d ", x);
}
