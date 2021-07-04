/**
 * @file idenmat.c
 * @author Shantanu Mane @RndmCodeGuy20 (shantanu.mane.200@outlook.com)
 * @brief Program to check whether the given input matrix is an identity matrix or not.
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
int row,col,i,j,flag=1;
    int mat[20][20];

    printf("Entered the number of rows and columns of the matrix: ");
    scanf("%d %d",&row,&col);

    //Input of the values of the matrix.
    
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("Enter the value of place [%d] [%d]: ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }

    //Displaying the values of the matrix.

    printf("You entered the matrix: \n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){

            printf("%d \t", mat[i][j]);
        }
        printf("\n\n");
    }

    //Checking if the matrix is identity matrix or not.
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            if((mat[i][j] != 1)&&(mat[j][i]!=0)){
                flag=0;
                break;
            }
               
        }
        if (flag==1)
        {
            printf("YES! Entered matrix is an identity matrix!!\n\n");
        }
        else
        {
            printf("NO! Entered matrix is not an identity matrix!!\n\n");
        }
        
    }
return 0;
}