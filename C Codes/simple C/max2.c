#include<stdio.h>
#include<conio.h>
int main()
{
    float n1,n2,max;
    printf ("Input n1: \n");
    printf ("Input n2: \n");
    scanf ("%f %f", &n1,&n2);

    if(n1>n2){printf ("n1(%f) is greater than n2(%f)", n1,n2);}
    else {printf(" n2(%f) is greater than n1(%f)", n2, n1);}
    return 0;
}