#include<stdio.h>
#include<conio.h>

int main()
{
    int n,rem;

    printf("Enter the desired number: ");
    scanf("%d", &n);

    if(n==0){
        printf("Entered number is zero.\n");
    }

    else{

    rem = n%2;

    if(n>=1000&&n<=9999){
        if(rem==0){
            printf("The entered number %d is even.\n",n);
        }
        else{
            printf("The entered number %d is odd.\n",n);
        }
    }
    else{
        printf("Entered number is invalid!!!!\n Enter a valid 4-digit number.\n");
    }
    }

    return 0;
}