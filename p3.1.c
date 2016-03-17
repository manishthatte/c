#include "personal_details.h"
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    float fmin = FLT_MIN; float fmax = FLT_MAX; int imin = INT_MIN; int imax = INT_MAX; long lmin = LONG_MIN; long lmax = LONG_MAX;
    //double llmin = LONG_LONG_MIN; double llmax = LONG_LONG_MAX;
    printf("INT_MIN = %d\n INT_MAX = %d\n FLT_MIN = %f\n FLT_MAX = %f\n"
            "LONG_MIN = %ld\n LONG_MAX = %ld", imin, imax, fmin, fmax, lmin, lmax);
    printf("\n");
    int x; char y;
    for(x = 0; x < 127; x++)
    {
        y = x;
        printf("The ascii code value for %c is %d\n", y, x);
    }



    details();
    return 0;
}
