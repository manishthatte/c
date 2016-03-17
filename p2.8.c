//--functions
#include "personal_details.h"
#include <stdio.h>

int one_three();
int two();
int main(void)
{
    printf("starting now:\n");
    one_three();
    printf("done!\n");
    details();
}

int one_three()
{
    printf("one\n");
    two();
    printf("three\n");
}

int two()
{
    printf("two\n");
}
