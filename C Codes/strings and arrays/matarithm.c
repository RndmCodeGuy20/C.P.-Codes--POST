/**
 * @file matarithm.c
 * @author Shantanu Mane @RndmCodeGuy20 (shantanu.mane.200@outlook.com)
 * @brief  Program to operate two given input matrices arithmetically.
 * @version  420.69
 * @date 2021-06-05
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include<conio.h>

int main()
{
    int mat1[20][20],mat2[20][20],matR[20][20];
    int row,col,i,j;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&row,&col);

    //Input of the values of the first matrix.
    printf("Enter the values of the first matrix: \n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("Enter the value of place [%d] [%d]: ",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
    }

    //Input of the values of the second matrix.
    printf("Enter the values of the second matrix: \n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("Enter the value of place [%d] [%d]: ",i+1,j+1);
            scanf("%d",&mat2[i][j]);
        }
    }

    //Displaying the first matrix.
    printf("First matrix entered is: \n");
     for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d \t",mat1[i][j]);
        }
        printf("\n");
     }

       //Displaying the second matrix.
    printf("Second matrix entered is: \n");
     for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d \t",mat2[i][j]);
        }
        printf("\n");
     }

     //Calculate the sum of the two matrix.
    for(i=0;i<row;i++){
         for(j=0;j<row;j++){
             matR[i][j]= mat1[i][j]+mat2[i][j];
         }
     }

     //Displaying the result of addition of the two matrices.
     printf("\n\n The addition of the two matrices is: \n");
     for(i=0;i<row;i++){
         for(j=0;j<col;j++){
             printf("%d\t",matR[i][j]);
         }
         printf("\n\n");
     }

return 0;
}