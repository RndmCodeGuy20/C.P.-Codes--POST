#include<stdio.h>

int main()
{
    int num;
    printf("Enter the num: ");
    scanf("%d",&num);

    if(num<=0){printf("%d",(-1)*num);}
    else {printf("%d",num);}

    return 0;
}