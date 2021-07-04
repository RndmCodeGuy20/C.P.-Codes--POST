/**
 * @file trinum5.c
 * @author Shantanu Mane @RndmCodeGuy20 (shantanu.mane.200@outlook.com)
 * @brief 
 * @version  420.69
 * @date 2021-06-06
 * 
 * @copyright Copyright (c) 2021 
 */
#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, rows;

    printf("Enter the number of rows needed: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        for (j = rows; j >= i; j--)
        {
            printf("%d", j);
        }
        printf("\rows");
    }

    return 0;
}