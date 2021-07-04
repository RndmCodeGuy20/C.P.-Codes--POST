#include<stdio.h>
#include<conio.h>

int main()
{
    int num,sum,rem;
    sum = 0;

    printf ("Enter the number: ");
    scanf("%d",&num);

    while(num!=0)
    {   
        rem = num % 10;

        sum =sum + rem;

        num = num/10;

    }

    printf ("Sum of the numbers digit is: %d",sum);

    return 0;
}