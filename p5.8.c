#include "details.h"
#include <stdio.h>

int moduli(int m, int n);

int main(void)
{
    printf("This program computes moduli\n");
    printf("Enter an integer to serve as the second operand:\n");
    int second;
    scanf("%d", &second);
    printf("Now enter the first operand:\n");
    int first;
    scanf("%d", &first);
    moduli(first, second);
    printf("%d %% %d is %d\nDone...\n", first, second, moduli(first, second));
    details();
    return 0;
}

int moduli(int m, int n)
{
    int modulus;
    modulus = m % n;
    return modulus;
}
