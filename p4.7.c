#include <stdio.h>
#include <float.h>

int main(void)
{
    double x = 1.0 / 3.0; float y = 1.0 / 3.0;
    printf("4digits to right double %0.4f float %0.4f\n", x, y);
    printf("12digits to right %0.12f %0.12f\n", x, y);
    printf("16digits to right %0.16f %0.16f\n", x, y);
    double z = DBL_DIG; float w = FLT_DIG;
    printf("double %f float %f\n", z, w);
    return 0;
}
