#include "details.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    printf("This program analyzes a file into uppercase, lowercase "
           "and other characters.\n");
    printf("Please input the file name:\n");
    int i_u = 0; int i_l = 0; int i_o = 0; FILE *fp; char ch; char fname[80];
    scanf("%s", &fname);
    fp = fopen(fname, "r");
    if((ch = getc(fp)) == NULL)
    {
        printf("File not accessible.\n");
        exit(1);
    }
    while((ch = getc(fp)) != EOF)
    {
        if(isupper(ch))
            i_u++;
        else if(islower(ch))
            i_l++;
        else
            i_o++;
    }
    printf("Number of upper case letters is %d, number of"
           "\nlower case letters is %d and number of other characters is %d.", i_u, i_l, i_o);
    printf("\n");
    details();
    return 0;
}
