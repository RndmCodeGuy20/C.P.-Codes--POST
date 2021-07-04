/**
 * @file strcopyfunc.c
 * @author Shantanu Mane (shantanu.mane.200@outlook.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <conio.h>

void strcopy(char resultp[20], char sourcep[20]);
int main()
{
    char source[20], result[20];

    printf("Enter the string: ");
    scanf("%s", &source);

    strcopy(result, source);

    /*
    todo forwarding the data stored in source to the defined function. 
    */

    printf("Resultant string is: %s", result);

    /*
    *Code is working fine!
    */

    return 0;
}
void strcopy(char *resultp, char *sourcep)
{
    while (*sourcep != '\0')
    {
        *resultp = *sourcep;
        sourcep++;
        resultp++;
    }

    *resultp = '\0';
}