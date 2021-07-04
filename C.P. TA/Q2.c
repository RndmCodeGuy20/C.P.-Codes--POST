#include<stdio.h>
#include<conio.h>

int main()
{
int i,j,rows;

printf("Enter the number of rows needed: ");
scanf("%d",&rows);

for(i=rows;i>=1;i--){
    for(j=i;j<=rows;j++){
        printf("%d",j);
    }
    printf("\n");
}

return 0;
}