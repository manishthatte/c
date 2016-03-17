#include "details.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    float height; char name[20];
    printf("Please enter your height in inches and name:\n");
    scanf("%f %s", &height, name);
    printf("%s, you are %0.3f feet tall.\n", name, height / 12.0);
    printf("%zd\n", sizeof height);
    printf("%zd\n", strlen(name));
    details();
    return 0;
}
