/**
 * @file arraysum.c
 * @author Shantanu Mane @RndmCodeGuy20 (shantanu.mane.200@outlook.com)
 * @brief 
 * @version  420.69
 * @date 2021-06-05
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <conio.h>

int main()
{
    int n, sum, i;
    int num[n];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the numbers of the array: ");

    sum = 0;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum += num[i];
    }

    printf("\nSum of the numbers in array is: %d", sum);

    return 0;
}