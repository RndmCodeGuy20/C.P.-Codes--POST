#include <stdio.h>
#include <conio.h>

int main()
{
    int m;
    float fx;
    char cht;
    int *ptr1;
    float *ptr2;
    char *ptr3;

    m = 300;
    fx = 300.600006;
    cht = 'z';

    ptr1=&m;
    ptr2=&fx;
    ptr3=&cht;

    printf("\nAddress of m: %d", &m);
    printf("\nAddress of fx: %d", &fx);
    printf("\nAddress of cht: %d", &cht);

    printf("\nValue at adrress of m: %d", *ptr1);
    printf("\nValue at adrress of fx: %f", *ptr2);
    printf("\nValue at adrress of cht: %c", *ptr3);

    printf("\nAddress of m: %d", ptr1);
    printf("\nAddress of fx: %d", ptr2);
    printf("\nAddress of cht: %d", ptr3);

    printf("\nValue at adrress of m: %d", *&m);
    printf("\nValue at adrress of fx: %f", *&fx);
    printf("\nValue at adrress of cht: %c", *&cht);

    return 0;
}