/**
 * @file readfile.c
 * @author Shantanu Mane (shantanu.mane.200@outlook.com)
 * @brief 
 * @version 0.1
 * @date 2021-05-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;

    fptr = fopen("Stud_info_file.txt", "r");

    if (fptr == NULL)
    {
        printf("Error opening the file!!!");
        return 1;
    }

    printf("\nStudents Information --> \t\n");

    char c;

    while ((c = getc(fptr)) != EOF)
    {
        putchar(c);
    }
    fclose(fptr);

    return 0;
}