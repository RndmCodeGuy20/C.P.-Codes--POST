#include<stdio.h>
#include<conio.h>

int main(){

int i, j,rows;

printf("Enter the number of rows: ");
scanf("%d",&rows);

    for(i=1;i<=rows;i++){
        for(j=5;j>i;j--)
    {printf(" ");}

    for(j=i;j<(i*2)-1;j++)
    {printf("%d",j);}

    for(j=(i*2)-1;j>=i;j--){
    printf("%d",j);
    }

    printf("\n");
    }
   
    return 0;
}
