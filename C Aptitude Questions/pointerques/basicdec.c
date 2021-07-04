#include <stdio.h>
#include <conio.h>

int main()
{
    int m, n, o;
    int *z;

    m = 10;

    printf("\nHere address of m is: %x", &m);
    printf("\nHere address of n is: %x", &n);
    printf("\nHere address of o is: %x", &o);

    z = &m;

    printf("\nHere value of m with de-referenced pointer is: %d", *z);

    return 0;
}