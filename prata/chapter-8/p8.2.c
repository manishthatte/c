#include "details.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int col = 0; int i = 0; FILE *fp; int ch; char fname[80]; char space_char;
    printf("This program prints file contents and their ASCII values.\n");
    printf("Please enter file to be analyzed: \n");
    scanf("%s", &fname);

    fp = fopen(fname, "r");
    if(fp == NULL)
    {
        printf("File does not exist or is unreadable.\n");
    }

    while((ch = getc(fp)) != EOF)
    {
        switch(ch)

        {
            case ('\n'): col = 0; printf("\\n"); printf("\n"); break;
            case (' ') : printf("SPACE, "); break;
            case ('\t'): printf("\\t, "); break;
            default:     printf("%c = %d, ", ch, ch); break;
            i++;
        }
        if(col >= 10)
            printf("\n");

    }
    printf("The number of characters in the file are %d", i);

    fclose(fp);
    details();
}
