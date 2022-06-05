#include <stdio.h>
#include <conio.h>

#define PI 3.1415

float surfaceArea(int height, int radius)
{
    float surfaceArea = (2 * PI * (radius) * (height)) + (2 * PI * (radius) * (radius));

    return surfaceArea;
}

float Volume(int h, int r)
{
    float Volume = PI * (r) * (r) * (h);

    return Volume;
}

int main()
{
    int radius = 10;
    int height = 10;

    printf("Volume : %f\n", Volume(height, radius));
    printf("Surface Area : %f", surfaceArea(height, radius));

    return 0;
}