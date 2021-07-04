#include <stdio.h>
#include <conio.h>

int main()
{
    char str[1024], rev[1024], norm[1024], c;
    int i, j, n = 0, m = 0, flag = 0, o = 0, k = 0;

    printf("Enter the String you want to reverse: ");
    scanf("%s", &str);

    /*we can find the number of characters by using this program.*/

    while (str[n] != '\0')
    {
        n++;
    }
    j = n - 1;

    for (i = 0; i < n; i++)
    {
        rev[i] = str[j];

        j--;
    }
    printf("String after reverse would be: %s \n\n", rev);

    while (str[o] != '\0')
    {
        str[k] = norm[k];
        k++;
        o++;
    }

    while (rev[m] != '\0')
    {
        if (rev[i] = rev[i])
        {
            flag = 1;
        }
        m++;
        i++;
    }

    if (flag == 1)
    {
        printf("Yes it is a palindrome!");
    }
    else
    {
        printf("No it is not a palindrome!");
    }

    return 0;
}