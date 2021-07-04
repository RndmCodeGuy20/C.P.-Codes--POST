/**
 * @file selsort.c
 * @author Shantanu Mane (shantanu.mane.200@outlook.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 */

#include <stdio.h>
#include <conio.h>

int main()
{

    int i, j, n, temp, array[100];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("Sorted array: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }

    return 0;
}