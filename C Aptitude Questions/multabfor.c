/**
 * @file multabfor.c
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
    int i, n, m;

    printf("Enter the number whose table is to be printed: ");
    scanf("%d", &n);
    printf("\n\nTable of the given number is: \n");
    for (i = 1; i <= 10; i++)
    {
        m = n * i;
        printf("%d*%d=%d\n", n, i, m);
    }

    return 0;
}