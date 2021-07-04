#include <stdio.h>

void sine(float m);

int main()
{
    float x, y;

    printf("Enter the angle (in radians) : ");
    scanf("%f", &x);

    sine(x);

    return 0;
}
void sine(float m)
{
    double sum;

    sum = m - ((m * m * m) / (3 * 2 * 1)) + ((m * m * m * m * m) / (5 * 4 * 3 * 2 * 1)) - ((m * m * m * m * m * m * m) / (7 * 6 * 5 * 4 * 3 * 2 * 1));

    printf("%lf", sum);
}
