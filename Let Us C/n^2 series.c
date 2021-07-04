#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    int i, lim;

    float sum;
    double z;

    printf("Enter the limit : ");
    scanf("%d", &lim);

    for (i = 1; i <= lim; i++)
    {
        z = pow(i, 2);
        sum += 1 / z;
    }

    printf("The sum of the series is %f", sum);

    return 0;
}