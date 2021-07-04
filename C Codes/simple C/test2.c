#include<stdio.h>
#include<conio.h>

int main()
{
int a,b,c,d;

a=5,b=6,c=7;

d=((a>b&&a>c)?a:((b>c)?b:c));
printf("greater number is %d",d);

return 0;
}
