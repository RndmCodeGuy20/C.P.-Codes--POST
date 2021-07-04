/**
 * @file matmul.c
 * @author Shantanu Mane (shantanu.mane.200@outlook.com)
 * @brief Program to find the result of the multiplication of two Matrices.
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * @return Code exit with return 0;
 *
 */
#include <stdio.h>
#include <conio.h>

int main()
{
    int i = 0, j = 0, k = 0, mul = 0;
    int arow, acol, brow, bcol;

    int mata[20][20], matb[20][20], matpr[20][20];

    //Input the numbers of rows and columns of matrix A
    printf("Enter the number of rows and columns of Matrix A: ");
    scanf("%d %d", &arow, &acol);
    //Input the elements of matrix A
    for (i = 0; i < arow; i++)
    {
        for (j = 0; j < acol; j++)
        {
            printf("Enter the element %d %d: ", i + 1, j + 1);
            scanf("%d", &mata[i][j]);
        }
    }

    //Input the number of rows and columns of matrix B
    printf("Enter the number of rows and columns of matrix B: ");
    scanf("%d %d", &brow, &bcol);

    //Input the elements of matrix B
    for (i = 0; i < brow; i++)
    {
        for (j = 0; j < bcol; j++)
        {
            printf("Enter the element %d %d: ", i + 1, j + 1);
            scanf("%d", &matb[i][j]);
        }
    }

    //Condition of multiplication
    if (acol != brow)
    {
        printf("Sorry product of matrix cannot be done due to different dimensities!\n");
    }
    else
    {

        //MATRIX MULTIPLICATION PART
        for (i = 0; i < arow; i++)
        {
            for (j = 0; j < bcol; j++)
            {
                for (k = 0; k < brow; k++)
                {
                    mul += mata[i][k] * matb[k][j];
                }
                matpr[i][j] = mul;
                mul = 0;
            }
        }
        printf("The resultant matrix is: \n");

        for (i = 0; i < arow; i++)
        {
            for (j = 0; j < bcol; j++)
            {
                printf("%d \t", matpr[i][j]);
            }
            printf("\n");
        }
    }

    /*
    *Code is correct, giving appropriate and correct output!!
    ! No bug found.
    */

    return 0;
}