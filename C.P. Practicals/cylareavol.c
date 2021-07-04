/**
 * @file cylareavol.c
 * @author Shantanu Mane (shantanu.mane.200@outlook.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <conio.h>
#define PI 3.1415
void areavol(float *areacy, float *volcy, float *r, float *h);
int main()
{
    float area, vol, rad, hgt;

    printf("Enter the radius and height of the required cylinder: ");
    scanf("%f %f", &rad, &hgt);

    areavol(&area, &vol, &rad, &hgt);

    printf("Area and Volume of the cylinder whose dimensions are entered by the user are: %.3f  %0.3f", area, vol);
    return 0;
}
void areavol(float *areacy, float *volcy, float *r, float *h)
{

    *areacy = 2 * PI * (*r) * (*r + *h);
    *volcy = PI * (*r) * (*r) * (*h);
}