#include<stdio.h>
#include<conio.h>
#include<strings.h>

int main()
{
    char a[1024],b[1024];
    int c;

    printf("\nEnter the word you want to check: ");
    gets(a);
    printf("\nYou entered the string: ");
    puts(a);

    printf("\n\nDo you want to print the result?(1/0): ");
    scanf("%d",&c);

    if(c==1){
    strcpy(b,a);    //Copying input string
    strrev(b);      //Reversing the string

    if(strcmp(a,b)==0)  //Comparing input string with the reverse string
    {printf("\nThe string: %s IS a palindrome :)!\n",a);}

    else
    {printf("\nThe string: %s is NOT a palindrome :(!\n",a);}
    }
  else{printf("You opted out of the program!!");}

return 0;
}