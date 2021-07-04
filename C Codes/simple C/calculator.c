#include<stdio.h>
#include<conio.h>
int main()
{   
    float a,b,c;
    char o;
    
    printf ("Enter the Numbers and the Desired Operator: ");
    scanf("%f %c %f", &a,&o,&b);


    switch(o){

        case '+':
        c = a + b;
        break;

        case '-':
        c = a - b;
        break;

        case '*':
        c = a*b;
        break;

        case '/':
        c = a/b;
        break;

        default :
        printf ("Syntax Error!\n");

    }

    printf("Your Result is: %f", c);
    
    return 0;
}