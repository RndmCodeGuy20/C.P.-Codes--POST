/**
 * @file avg.c
 * @author Shantanu Mane (shantanu.mane.200@outlook.com)
 * @brief 
 * @version 0.1
 * @date 2021-03-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <conio.h>

int main()
{
    int m, s, e, p, avg;
    printf("Enter your Maths, Science, English and P.E. marks respectively: ");
    scanf("%d %d %d %d", &m, &s, &e, &p);
    avg = (m + s + e + p) / 4;

    printf("Your average marks are: %d", avg);

    return 0;
}
