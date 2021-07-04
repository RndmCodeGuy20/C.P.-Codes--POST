/**
 * @file palindrome.c
 * @author Shantanu Mane (shantanu.mane.200@outlook.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <conio.h>

int main()
{
    char str[1024], c;
    int i, n = 0;
    int flag = 0, choice;

    repeat:
    printf("Enter the String you want to check if it is a palindrome or not: ");
    scanf("%s", &str);

    /*we can find the number of characters by using this algorithm.*/

    while (str[n]!='\0')
    {
        n++;
    }
    
    //Here we compare the first and the last character of the input string
    //If the two characters are same then flag value retains to be 0.
    //If the two are not equal then the flag value is assigned to be 1.

    for (i = 0; i < n; i++)
    {
        if (str[i] != str[n - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("\n%s is Not a palindrome!\n\n", str);
    }
    else
    {
        printf("\n%s Is a palindrome!\n\n", str);
    }

    printf("Do you want to check another string?\t (Yes=1/No=0)\n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        goto repeat;
    }
    else
    {
        goto end;
    }
    end:
    return 0;
}