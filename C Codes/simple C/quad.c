#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<complex.h>


int main()
{
    int a,b,c,x1,x2;
    double i,d;

    printf ("Enter the variables:");
    scanf("%d %d %d", &a, &b, &c);

    printf("The required Quadratic Equation is %dx^2+%dx+%d\n", a, b, c);


    i = (b*b-4*a*c);

    d = sqrt(i);

    x1 = (- b + d )/2*a;
    x2 = (- b - d)/2*a;
    
    printf ("Your solutions are %d and %d", x1, x2);

    return 0;
}