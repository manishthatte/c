#include "details.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    printf("This program computes average number of letters per word.\n");
    printf("Please input the filename to be analyzed.\n");
    int no_letters = 0.0; int no_words = 0; FILE *fp; float letters_per_word;
    char filename[80]; char ch; bool inword = false;
    scanf("%s", &filename);
    fp = fopen(filename, "r");
    if(fp == NULL)
    {
        printf("File not accessible.");
        exit(1);
    }
    while((ch = getc(fp)) != EOF)
    {
        if(isspace(ch))
        {
            inword = false;
            continue;
        }
        else if(ispunct(ch))
        {
            inword = false;
            continue;
        }
        else
        {

            no_letters++;
            if(!inword && !isspace(ch) && !ispunct(ch))
                {
                    no_words++;
                    inword = true;
                }
        }
    }
    printf("Number of letters = %d\n", no_letters);
    printf("Number of words = %d\n", no_words);
    letters_per_word = ((float)no_letters / (float)no_words);
    printf("Average letters per word = %0.4f\n", letters_per_word);
    fclose(fp);
    details();
    return 0;
}

