#include<stdio.h>
#include<conio.h>

int main(){

    int i,j,rows,spc;

    printf("Enter number of rows: ");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++){
        for(spc=1;spc<=rows-i;++spc){
            printf(" ");
        }
        for(j=0;j<i;j++){
            printf("%d ",i+3*j);
        }
        for(j=i-1;j>=1;j--){
            printf("%d ",i+3*j-3);
        }
      
    printf("\n");
    }

    return 0;
}