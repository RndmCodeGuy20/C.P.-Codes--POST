#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, k, n, sum1;
    int input[1024], even[1024], odd[1024];

    printf("Enter the number of values you want to input in the array: ");
    scanf("%d", &n);

    printf("Enter the values of the input array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &input[i]);
    }

    /*Printing the entered array.*/

    printf("You entered the array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", input[i]);
    }

    /*Checking the condition of whether the value is odd or even*/
    for (i = 0; i < n; i++)
    {
        if (input[i] % 2 == 0)
        {
            even[j] = input[i];
            j++;
        }
        else if (input[i] % 2 != 0)
        {
            odd[k] = input[i];
            k++;
        }
        else
        {
            printf("invalid case!");
        }
    }

    /*Printing the array containing even numbers*/

    printf("\nThe array contianing even numbers is: ");
    for (i = 0; i < j; i++)
    {
        printf("%d\t", even[i]);
    }

    /*Printing the array containing odd numbers.*/

    printf("\nThe array containing odd numbers is: ");
    for (i = 0; i < k; i++)
    {
        printf("%d\t", odd[i]);
    }

    /*Printing the sum of all the even numbers*/

    for (i = 0; i < j; i++)
    {
        sum1 += even[i];
    }
    

    int sum2 = 0;

    /*Printing the sum of all the odd numbers*/

    for (i = 0; i < k; i++)
    {
        sum2 += odd[i];
    }
    
    
    if(sum1>=sum2){
        printf("\nSum of even numbers %d is greater!", sum1);
    }
    else{
        printf("\nSum of odd numbers %d is greater!", sum2);
    }
    return 0;
}