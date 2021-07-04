#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;

    int num, quant, i;
    float price, value;
    char item[10], filename[10];

    printf("Input File Name: ");
    scanf("%s", filename);

    fptr = fopen(filename, "w");

    printf("\nINPUT INVENTORY NAME:");
    printf("\nINPUT NAME: NUMBER: PRICE: QUANTITY:\n");

    for (i = 1; i <= 3; i++)
    {
        fscanf(stdin, "%s %d %f", item, &num, &price, &quant);

        fprintf(fptr, "%s %d %.2f %d", item, num, price, quant);
    }
    fclose(fptr);

    fprintf(stdout, "\n\n");

    fptr = fopen(filename, "r");

    printf("ITEM NAME: NUMBER: PRICE: QUANTITY:\n");

    for (i = 1; i < 3; i++)
    {
        fscanf(fptr, "%s %d %f %d", item, &num, &price, &quant);
        value = price * quant;
        fprintf(stdout, "%-8s %7d %8.2f %8d %11.2f\n",
                item, num, price, quant, value);
    }

    return 0;
}