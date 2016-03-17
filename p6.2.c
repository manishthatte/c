#include "details.h"
#include <stdio.h>

int main(void)
{
   int i; int j; int k;
   for(i = 0; i < 5; i++)
    {
        for(j = i; j >= 0; j--)
        {
            printf("%c", '$');
            printf("i = %d, j = %d", i, j);

        }
        printf("\n");
        printf("i = %d, j = %d\n", i, j);

    }
   details();
   return 0;
}
