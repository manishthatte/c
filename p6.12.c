#include "details.h"
#include <stdio.h>
#include <math.h>

float series1(long x);
float series2(long x);

int main(void)
{
    printf("This program evaluates running totals of infinite "
           "series.\n");
    printf("Please enter the limit in integers upto which the terms are to "
           "be evaluated:\n");
    long limit;
    while(scanf("%ld", &limit) == 1)
    {
        printf("The evaluation of series one evaluated upto "
                "%ld terms is %f\n", limit, series1(limit));
        printf("The evaluation of series two evaluated upto "
                "%ld terms is %f\n", limit, series2(limit));
        printf("Do you want to evaluate the series upto another "
               "limit? Please enter limit or q to quit:\n");
    }
    details();
    return 0;

}

float series1(long x)
{
    double m; float series = 0.0; float inter;
    for(m = 1.0; m <= x; m++)
    {
        series += 1.0/m;

    }
    return series;
}

float series2(long x)
{
    int z = -1; long y; float series = 0.0;

    for(y = 1; y <= x; y++)
        {series += z*((1.0/y)*pow(z, y));}
    return series;
}
