#include <stdio.h>
#include <conio.h>

long numcomp(long *, long *);
int main()
{
    long a, b, max;

    printf("Enter the two numbers: ");
    scanf("%ld %ld", &a, &b);

    max = numcomp(&a, &b);

    printf("The maximum of the two numbers is: %ld", max);

    return 0;
}

long numcomp(long *n1,long *n2){
    
    long max;
    if (*n1 > *n2)
    {
        max = *n1;
    }
    else
    {
        max = *n2;
    }
    
    return max;
}