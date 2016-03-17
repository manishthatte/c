#include <stdio.h>
#include "details.h"

int main(void)
{
    printf("Please enter the number of miles traveled:\n");
    float miles;
    scanf("%f", &miles);

    printf("Please enter the fuel consumed for the "
           "distance traveled (In gallons):\n");
    float gallons;
    scanf("%f", &gallons);

    float fuel_efficiency_us = miles / gallons;
    printf("Fuel efficiency (US) is %0.1f miles per gallons\n",
           fuel_efficiency_us);

    float fuel_efficiency_eu;
    fuel_efficiency_eu = (gallons*3.785*100) / (miles*1.609);
    printf("Fuel efficiency (EU) is %0.1f liters per 100 km\n",
           fuel_efficiency_eu);
    details();
    return 0;

}
