/**
 * @file strarr.c
 * @author Shantanu Mane @RndmCodeGuy20 (shantanu.mane.200@outlook.com)
 * @brief 
 * @version  420.69
 * @date 2021-06-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include<conio.h>

int main()
{
int i=0;
char name[]="Hello World!";
//*Using while method.
while (name[i]!='\0')
{
    printf("%c ",name[i]);
    i++;
}
//*Using string output method.
printf("%s", name);
return 0;
}