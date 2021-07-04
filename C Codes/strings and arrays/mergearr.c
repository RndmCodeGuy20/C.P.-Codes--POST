/**
 * @file mergearr.c
 * @author Shantanu Mane @RndmCodeGuy20 (shantanu.mane.200@outlook.com)
 * @brief   Program to merge two arrays in one single array.
 * @version  420.69
 * @date 2021-06-05
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
    int arr1[50], arr2[50], size1, size2, i, k, merge[100];
    printf("Enter size of ARRAY1: ");
    scanf("%d", &size1);
    printf("Enter ARRAY1's Elements: ");
    for (i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
        merge[i] = arr1[i];
    }
    k = i;
    printf("\nEnter size of ARRAY2: ");
    scanf("%d", &size2);
    printf("Enter ARRAY2's Elements: ");
    for (i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
        merge[k] = arr2[i];
        k++;
    }
    printf("\nThe new array after merging is:\n");
    for (i = 0; i < k; i++)
        printf("%d ", merge[i]);

    return 0;
}