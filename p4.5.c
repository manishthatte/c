#include "details.h"
#include <stdio.h>

int main(void)
{
    printf("Please input the download speed in megabytes(Mbs) and the size of the file in MB.\n");
    float speed; float size; float time;
    scanf("%f %f", &speed, &size);

    //time = (size / speed);
    printf("%.2f is the size, %.2f is the speed and %.2f is the time.\n", size, speed, size/speed);
    details();
    return 0;
}
