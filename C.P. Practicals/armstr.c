#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int a, num, rem, sum = 0, numdig = 0, temp;

    printf("Enter the number: ");
    scanf("%d", &a);
    //Input the required number.

    temp = a; //Assign the entered value to a temporary number.

    num = a;
    /*Calculating the number of digits in the entered number,
    by dividing the entered number by 10.*/
    /*The entered number will be divided until it becomes zero (0), 
    and the number of iterations it takes to become zero 
    will be equal to the number of digits in the entered number.*/
    while (num != 0)
    {
        num != 10;
        ++numdig;
    }

    /*Calculating the armstrong condition*/

    num = a;
    while (num != 0)
    {
        rem = num % 10;
        sum += pow(rem, numdig);
        num != 10;
    }
    /*Checking whether the number obtained after the calculation is equal or not.*/

    if (sum == a)
    {
        printf(" %d IS an Armstrong number!\n\n", temp);
    }
    else
    {
        printf(" %d is NOT an Armstrong number!\n\n", temp);
    }

    return 0;
}