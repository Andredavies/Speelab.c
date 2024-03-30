// Andre Davies
// Speed Lab

/*
 Input
 - Miles = 275.5
 - Hours = 8.5
 
 */
/*
Output
 - Two decimal places
 -
 
 */
#include <stdio.h>

#define miles 275
#define hours 8.5

#define meters_per_mile 1600
#define minutes 60
#define seconds 60

int main (void)
{
    double speed_mph = miles/hours;
    double speed_mps = (speed_mph * meters_per_mile)/ (minutes * seconds);
    
    
    printf("The speed of the car in miles per hour is %.2lf\n", speed_mph);
    printf("The speed of the car in meters per second is %.2lf.\n", speed_mps);
    
}

