#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
/*
? number of functions : null
! red code
*code green
*/
int main()
{
    FILE *fptr;
    char ch, append[1024];
    int linenum = 0;

    fptr = fopen("read.txt", "r");
    if (fptr == NULL)
    {
        printf("Cannot open file!!!");
        exit(1);
    }

    while ((ch = fgetc(fptr)) != EOF)
    {
        putchar(ch);

        if (ch == '\n')
        {
            ++linenum;
            printf("\n%d.    ", linenum);
        }
    }
    fclose(fptr);

    fptr = fopen("read.txt", "a");

    printf("Enter the lines you want to append: ");
    scanf("%s", &append);
    fprintf(fptr, "\n%s", append);

    return 0;
}