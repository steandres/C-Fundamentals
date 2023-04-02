/*
Write a program that computes the volume of a sphere with any radius in meters,
using the formula v = 4/3 (pi)*r^3
*/
#include <stdio.h>

#define SCALE_FACTOR (4.0f / 3.0f)
#define PI 3.1415f

int main(){
    
    float volume;
    int radius;

    printf("Input the sphere radius: ");
    scanf("%d",&radius);

    volume = SCALE_FACTOR * PI *(radius*radius*radius);

    printf("The volume of a sphere with %d meter radius: %.2f",radius, volume);

    return 0;
}