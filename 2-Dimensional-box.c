/*Computes the dimensional weight of a 12'' x 10'' x 8'' box*/

#include <stdio.h>

int main(){

    int height = 8;
    int lenght = 12;
    int width = 10;
    int volume = height * lenght * width;
    int weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", height, lenght, width);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}