#include <stdio.h>
#include <string.h>

void palindrome_check(char[], int);

int main()
{
    char str[25];

    printf("Input the word you want to check for palindrome condition: ");
    scanf("%s", str);
    palindrome_check(str, 0); //Function call for checking the palindrome condition.

    return 0;
}

//Function definition for checking the palindrome conditiion.
void palindrome_check(char str[], int index)
{
    int len = strlen(str) - (index + 1);
    if (str[index] == str[len])
    {
        if (index + 1 == len || index == len)
        {
            printf(" The entered word is a palindrome.\n\n");
            return;
        }
        palindrome_check(str, index + 1); //Function call and checking the palindrome condition recursively.
    }
    else
    {
        printf(" The entered word is not a palindrome.\n\n");
    }
}
