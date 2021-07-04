#include <stdio.h>
#include <conio.h>

float largest(float a[], int n); int main()
{
    float value[4] = {2.5, 1.9, -2.5, -1.5};
    printf("%f\n", largest(value, 4));

    return 0;
}
float largest(float a[], int n)
{
    int i;
    float max;
    max = a[0];
    for (i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return (max);
}