/**
 * @file pyrsamenum.c
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
    int i, j, rows, spc, k;

    printf("Enter the number of rows needed: ");
    scanf("%d", &rows);

    spc = rows;

    for (i = 1; i <= rows; i++)
    {

        for (k = spc; k >= 1; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        spc--;
        printf("\n");
    }

    return 0;
}