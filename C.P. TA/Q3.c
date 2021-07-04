#include<stdio.h>
#include<conio.h>

int main()
{
int i,j,row,spc,c;

printf("Enter the number of rows: ");
scanf("%d",&row);

for(i=0;i<=row;i++){
    for(spc=1;spc<=row-i;spc++){
        printf(" ");
    }
    for(j=0;j<=i;j++){
        if(i==0||j==0){
            c=1;
        }
        else{
            c=c*(i-j+1)/j;
        }
        printf("%d ",c);
    }
    printf("\n");
}

return 0;
}