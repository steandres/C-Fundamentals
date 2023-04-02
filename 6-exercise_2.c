/*
Write a program that computes the volume of a sphere with a 10-meter radius,
using the formula v = 4/3 (pi)*r^3
*/
#include <stdio.h>

#define SCALE_FACTOR (4.0f / 3.0f)
#define PI 3.1415f

int main(){
    
    float volume;
    volume = SCALE_FACTOR * PI *(10*10*10);

    printf("The volume of a sphere with 10 meter radius: %.2f", volume);

    return 0;
}