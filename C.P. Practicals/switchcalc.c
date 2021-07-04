#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n, o;
    int reverse = 0, rem, norm, sum = 0;
    int squarert;

    printf("Enter the required number and option you want to execute: ");
    scanf("%d %d", &n, &o);

    switch (o)
    {
    case 1:

        norm = n;
        while (n != 0)
        {
            rem = n % 10;
            reverse = reverse * 10 + rem;
            n /= 10;
        }
        printf("Reversed Number: %d\n", reverse);
        break;

    case 2:

        while (n != 0)
        {
            rem = n % 10;

            sum = sum + rem;

            n = n / 10;
        }

        printf("Sum of the number's digit is: %d", sum);
        break;

    case 3:

        squarert = sqrt(n);
        printf("Square Root of the given number is: %d", squarert);

    default:
        break;
    }

    return 0;
}