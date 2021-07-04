#include <stdio.h>
#include <conio.h>

int main()
{
    float a, b, c, d, r, i, den;
    int o;

    printf("Enter the real and imaginary part of the FIRST number: ");
    scanf("%f %f", &a, &b);

    printf("Enter the real and imaginary part of the SECOND number: ");
    scanf("%f %f", &c, &d);

    printf("Enter the option of operation ");
    scanf("%d", &o);

    switch (o)
    {
    case 1:
        r = a + c;
        i = b + d;

        printf("Result of the equation is: %0.2f + (%0.2f)i", r, i);
        break;

    case 2:
        r = a - b;
        i = b - d;

        printf("Result of the equation is: %0.2f + (%0.2f)i", r, i);
        break;

    case 3:
        r = (a * c) - (b * d);
        i = (a * d) + (b * c);

        printf("Result of the equation is: %0.2f + (%0.2f)i", r, i);
        break;

    case 4:
        r = (a * c) + (b * d);
        i = (b * c) - (a * d);
        den = (c * c) + (d * d);

        printf("Result of the equation is: %f + (%f)i", r / den, i / den);
        break;

    default:
        break;
    }

    return 0;
}