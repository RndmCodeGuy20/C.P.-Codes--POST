#include<stdio.h>
#include<conio.h>

int main(){

    int i,j,rows,spc,n=1,m=1;

    printf("Enter number of rows: ");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++){
        for(spc=1;spc<=rows-i;++spc){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d ",n);
        n++;
        }
        for()
        
        printf("\n");
    }
    return 0;
}