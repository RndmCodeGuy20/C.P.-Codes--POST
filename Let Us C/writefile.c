#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *ftarget;
    char s[1024];

    ftarget = fopen("C:\\C.P. Codes\\Files\\filetarget.txt", "r");

    if (ftarget == NULL)
    {
        puts("Cannot Open File!");
        exit(1);
    }

    while (fgets(s, 1023, ftarget) != NULL)
    {
        printf("%s", s);
    }
    printf("\n");

    printf("%lld", &s);
    fclose(ftarget);
    return 0;
}