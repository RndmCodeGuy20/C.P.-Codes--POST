/**
 * @file callbyref.c
 * @author Shantanu Mane (shantanu.mane.200@outlook.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <conio.h>

int GCD(int, int, int);
int check_prime(int);
int fibonacci(int, int, int, int);

int main()
{
    int gcd1, gcd2, min;

    printf("\n\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
    printf("\n\nProgram to find the G.C.D. of two user entered numbers.\n\n");

    printf("Enter the numbers whose G.C.D. is to be known: ");
    scanf("%d %d", &gcd1, &gcd2);

    if (gcd1 > gcd2)
    {
        min = gcd2;
    }
    else
    {
        min = gcd1;
    }

    int gcd = GCD(gcd1, gcd2, min);

    printf("\nThe Greatest Common Divisor of %d and %d is: %d", gcd1, gcd2, gcd);

    printf("\n\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
    printf("\n\nProgram to check whether user entered number is prime or not.\n\n");

    int num_prime;

    
    printf("\n\nEnter the number you want to check whether it is prime or not: ");
    scanf("%d", &num_prime);

    if (check_prime(num_prime) == 1)
    {
        printf("Yes! The entered number is PRIME!!!\n");
    }
    else
    {
        printf("No! The entered number is NOT PRIME!!!\n");
    }
    printf("\n\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
    printf("\n\nprogram to print the Fibonacci series upto the numbers entered by the user.\n\n");

    int fib_num, p = 1;
    int m = 0, n = 1;

    printf("Enter the number upto which you want to print the series: ");
    scanf("%d", &fib_num);

    int term = fibonacci(fib_num, m, n, p);
    printf("%d", term);

    return 0;
}

int GCD(int x, int y, int temp)
{
    while (temp > 0)
    {
        if (x % temp == 0 && y % temp == 0)
        {
            return temp;
        }
        else
        {
            temp--;
            GCD(x, y, temp);
        }
    }
}
int check_prime(int n)
{

    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int fibonacci(int n, int a, int b, int flag)
{

    while (flag <= n && flag < 40)
    {
        int c = a + b;
        a = b;
        b = c;
        flag++;
        printf("%d ", a);
    }
    return a;
}