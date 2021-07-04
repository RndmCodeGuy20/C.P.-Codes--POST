#include <stdio.h>
#include <conio.h>

int factorial(int n);
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    printf("The factorial of %d is: %d", n, factorial(n));

    return 0;
}

int factorial(int n)
{
    int fac;
    if (n >= 1)
    {
        fac = n * factorial(n - 1);
    }
    else
    {
        fac = 1;
    }
    return (fac);
}