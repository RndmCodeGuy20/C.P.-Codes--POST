#include<stdio.h>
#include<conio.h>
int main()
{
    int f,i,c;
    printf("Please type you temperature in Farenheit: (in deg Farenheit)");
    
    scanf("%d", &f);
    
    i= (f-32)*5;
    
    c= i/9;
    printf("Input Temperature in celsius is:%d degC", c);

    return 0;
}