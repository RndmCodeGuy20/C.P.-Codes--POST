#include<stdio.h>
#include<conio.h>

char u_upper(char c);
int main()
{
    char name[1024];
    int i=0;
    int j=0;
    char ret;

    printf("enter the lowercase string: ");
    scanf("%[^\n]", &name);

    printf("You entered the string: ");
    while (name[j] != '\0')
    {
        ret = u_upper(name[j]);
        printf("%c", ret);
        j++;
    }
    
return 0;
}
char u_upper(char c){

    char upper;

    upper = c - 32;

    return upper;
}