#include<stdio.h>
#include<conio.h>

int main()
{
int i,j,n;

printf("Enter the number of rows: ");
scanf("%d",&n);

for(i=0;i<=n;i++){
    for(j=1;j<=i;j++){
        printf("1");
    }
    printf("\n");
}

return 0;
}