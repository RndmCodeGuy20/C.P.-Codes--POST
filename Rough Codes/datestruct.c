#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

struct date
{
    char day[20];
    char month[20];
    int year;
};

int main()
{
    struct date cal[1];
    int i;

    printf("Enter the dates you want to compare : \n\n");

    for (i = 0; i <= 1; i++)
    {
        printf("Enter the day on the required date : ");
        scanf("%s", &cal[i].day);

        printf("Enter the month on the required date : ");
        scanf("%s", &cal[i].month);

        printf("Enter the year on the required date : ");
        scanf("%d", &cal[i].year);
    }

   
        if (cal[0].day == cal[1].day)
        {
            if (cal[0].month == cal[1].month)
            {
                if (cal[0].year == cal[1].year)
                {
                    printf("Dates ARE EQUAL!");
                }
                else{printf("Dates are NOT EQUAL!");}
            }
            else
            {
                printf("Dates are NOT EQUAL!");
            }
        }
        else
        {
            printf("Dates are NOT EQUAL!");
        }

    return 0;
}