#include<stdio.h>
#include<conio.h>

int main()
{
int num[100];
int i,j,key,n;

printf("Enter the number of values you want to input: ");
scanf("%d",&n);

printf("Enter the values of the required array: ");
for(i=0;i<n;i++){
    scanf("%d",&num[i]);
}
for(i=1;i<n;i++){

    key=num[i];
    j=i-1;
    while((key<num[j])&&(j>=0)){
        num[j+1]=num[j];
        j--;
    }
    num[j+1]=key;
}
printf("Your sorted array is: \n");
for(i=0;i<n;i++){
    printf("%d\t", num[i]);
}

return 0;
}