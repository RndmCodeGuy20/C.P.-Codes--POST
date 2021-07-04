#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, n, search, first, last, middle, array[1024], temp;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the values of the array: ");

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
    printf("\n\n");

    printf("Enter the value you want to search: ");
    scanf("%d", &search);

    first = 0;
    last = n - 1;
    middle = (first + last) / 2;

    while (first <= last)
    {
        if (array[middle] < search)
        {
            first = middle + 1;
        }
        else if (array[middle] == search)
        {
            printf("Searched value %d is found at position %d", search, middle + 1);
            break;
        }
        else
        {
            last = middle - 1;
            middle = (first + last) / 2;
        }
    }
    if (first > last)
    {
        printf("NO your desired element is not present in the input array!\n");
    }

    return 0;
}