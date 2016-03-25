#include "details.h"

void func(char ch, int i, int j);

int main(void)
{
    puts("This program prints a given character for the given number of rows and columns.");
    puts("Please enter the character to be printed:\n");
    char ch; int i; int j;
    scanf("%c", &ch);
    puts("Now enter the number of rows and cols:");
    scanf("%d %d", &i, &j);
    func(ch, i, j);
    details();
    return 0;
}

void func(char ch, int i, int j)
{
    int k, l;
    for(k = 0; k < i; k++)
    {
        for(l = 0; l < j; l++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
}
