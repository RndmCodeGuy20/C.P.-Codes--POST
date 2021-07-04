/**
 * @file minmaxarray.c
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
    int n, i;
    int num[20];
    //Entering the number of elements in the array.
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int min = num[0]; //Assigning the first term of the array to variables max and min

    for (i = 0; i < n; i++)
    {
        printf("Enter the array element[%d]: ", i); //Entering the elements in the array.
        scanf("%d", &num[i]);
    }
    /* 
    ?Algorithm for finding the minimum element
    * Works fine, g2g
    */
    for (i = 0; i < n; i++)
    {
        if (num[i] < min)
            min = num[i];
    }
    printf("The minimum number in the given array is: %d\n", min);
    /*
    ?Algorithm to find the largest element.
    //! 'max' picking up garbage value, giving output as garbage value
    //tried interchanging the relations.
    *Changed the position of max = num[0], code working fine now.
    */
    int max = num[0];
    for (i = 1; i < n; i++)
    {
        if (max < num[i])
        {
            max = num[i];
        }
    }
    printf("The maximum number in the given array is: %d\n", max);

    printf("The elements entered in the array are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", num[i]);
    }
    printf("\n");

    return 0;
}