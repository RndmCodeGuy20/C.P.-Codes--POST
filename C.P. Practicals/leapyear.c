#include<stdio.h>
#include<conio.h>

int main()
{
    int year;

    printf("Enter the year you want to check: ");
    scanf("%d", &year);

    if(year>=1900){
        if((year%400==0)||((year%4==0)&&(year%100!=0)))
        {printf("%d is a leap year.",year);}
    
    else{
        printf("%d is not a leap year.",year);
    }
    }
    else{
        printf("Year entered is invalid!!!\n Enter a valid year which is greater than 1900");
    }
    

return 0;
}