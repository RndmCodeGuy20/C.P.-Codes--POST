/**
 * @file multable.c
 * @author Shantanu Mane (shantanu.mane.200@outlook.com)
 * @brief 
 * @version  420.69
 * @date 2021-05-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Enter the number : ");
    scanf("%d", &num);
    printf("Multiplication table is :");
    for (int j = 1; j <= 10; j++)
    {
        printf("\n%d x %d = %d", num, j, num * j);
    }

    return 0;
}