#include<stdio.h>
#include<conio.h>

int main()
{
int i=0,n;

printf("Enter the range: ");
scanf("%d",n);

label: if(n%2==0){
printf("%d is an even number!!", i);}

else{
    printf("%d is an odd number!!", i);
}

i++;
if(i<=n){
    goto label;
}


return 0;
}