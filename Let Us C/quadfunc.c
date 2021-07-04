/**
 * @file quadfunc.c
 * @author Shantanu Mane (shantanu.mane.200@outlook.com)
 * @brief This program gives us the result of a given quadratic expression by entering the coefficients of the variables.
 * @version  420.69
 * @date 2021-05-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

float deter(float x, float y, float z);
float sol(float m, float n, float o);

int main()
{

    float a, b, c;

    printf("Enter the co-efficient of the given quadratic : ");

    scanf("%f %f %f", &a, &b, &c);

    double d = deter(a, b, c);

    printf("\nDeterminant of the given equation is : %.3lf\n", d);

    sol(a, b, d);

    return 0;
}
float deter(float x, float y, float z)
{
    double d;
    d = sqrt((y * y) - (4 * x * z));

    return d;
}
float sol(float m, float n, float o)
{
    float sol1, sol2;

    sol1 = ((-n) + o) / (2 * m);
    sol2 = ((-n) - o) / (2 * m);

    printf("\nThe solution of the given quadratic expression is : %.3f %.3f", sol1, sol2);
}
/*
*code green; code works fine.
!code does not give imaginary and long float values of the solution
?including complex.h might resolve the problem
*/