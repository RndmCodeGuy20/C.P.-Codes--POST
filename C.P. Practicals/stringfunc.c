/**
 * @file stringfunc.c
 * @author Shantanu Mane (shantanu.mane.200@outlook.com)
 * @brief 
 * @version 0.1
 * @date 2021-05-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <conio.h>
#include <string.h>

void reverse(char str3[]);
void concatenate(char str4[]);
int main()
{
    char str1[20], str2[20];

    printf("Enter the string you want to reverse: ");
    scanf("%s", &str1);

    printf("Enter the string you want to concatenate with string - Hi My name is : ");
    scanf("%s", &str2);

    reverse(str1);
    concatenate(str2);

    return 0;
}
void reverse(char str3[])
{
    int num_alpha;
    char rev[40];
    num_alpha = strlen(str3);
    for (int i = 0; i < num_alpha; i++)
    {
        rev[num_alpha - i - 1] = str3[i];
    }
    printf("Reversed String is : %s \n", rev);
}
void concatenate(char str4[])
{
    char strpre[20] = "Hi my name is";

    printf("Concatenated string : %s %s", strpre, str4);
}