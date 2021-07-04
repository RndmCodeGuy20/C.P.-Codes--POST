#include <stdio.h>
#include <conio.h>

int main()
{

    int i, j, rows;

    //Entering the number of rows needed.
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

        /*Printing the first triangle, which is inverted and made of whitespaces.*/
    for (i = 1; i <= rows; i++)
    {
        for (j = 5; j > i; j--)
        {
            printf(" ");
        }

        /*Printing the second triangle pattern made of numbers
    incrementing by 1.*/
        for (j = i; j < (i * 2) - 1; j++)
        {
            printf("%d", j);
        }

        /*Printing the third triangle pattern made of numbers decrementing by one (1)
    from the central value*/
        for (j = (i * 2) - 1; j >= i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
