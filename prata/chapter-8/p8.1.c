#include "details.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("This program counts the number of characters "
           "in the input file\n");
    printf("Please type the filename to be analyzed: \n");
    int ch; int count = 0;
    char filename[80];
    scanf("%s", &filename);
    FILE *fp;
    fp = fopen(filename, "r");
    if (fp == NULL)
        {
            printf("Failed to open file.\n");
            exit(1);
        }
    while((ch = getc(fp)) != EOF)
    {
        putchar(ch);
        count++;
    }
    fclose(fp);
    printf("The number of characters in the file are %d", count);
    details();
    return 0;
}
