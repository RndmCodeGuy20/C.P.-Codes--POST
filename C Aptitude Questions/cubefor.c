/**
 * @file cubefor.c
 * @author Shantanu Mane @RndmCodeGuy20 (shantanu.mane.200@outlook.com)
 * @brief 
 * @version  420.69
 * @date 2021-06-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <conio.h>

int main()
{
    int i, n;
    printf("Input the numbers: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Number is: %d and cube of the number %d is: %d\n", i, i, (i * i * i));
    }

    return 0;
}