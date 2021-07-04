#include <stdio.h>
#include <conio.h>

long addnum(long *, long *);
int main()
{
    long a, b, sum;
    
    printf("Enter the two numbers: ");
    scanf("%ld %ld", &a,&b);

    sum = addnum(&a,&b);
    printf("\nThe sum of the numbers %ld and %ld is: %ld", a,b,sum);

    return 0;
}

long addnum(long *n1, long *n2){
    //Here address of a and b is given to n1 and n2.
    long sum;
    sum = *n1 + *n2;//Here address of n1 and n2 are dereferenced to give the values of n1 and n2.
    return sum;
}