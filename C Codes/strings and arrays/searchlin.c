#include <stdio.h>
#include <conio.h>

int linear(int array[], int n, int req);
int main()
{
    int array[1024], i, n, position, search;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the numbers in the array: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter the number that you want to search in the array: ");
    scanf("%d", &search);

    position = linear(array, n, search);

    if (position == -1)
    {
        printf("%d is NOT present in the array.\n", search);
    }
    else
    {
        printf("%d IS present in the array at the location %d.\n", search, position + 1);
    }

    return 0;
}

int linear(int array[], int n, int req)
{
    int j;
    for (j = 0; j < n; j++)
    {
        if (array[j] == req)
        {
            return j;
        }
    }

    return -1;
}