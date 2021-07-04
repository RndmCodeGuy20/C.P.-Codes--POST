#include<stdio.h>
#include<conio.h>
int main()
{
    float n1,n2,n3;
    printf("Enter the Three Numbers: ");
    scanf("%f %f %f", &n1,&n2,&n3);

    if (n1>n2){if (n1>n3){printf("n1 (%f) is the greatest number.", n1);}
    else{printf("n3 (%f) is the greatest number.", n3);}}
    else
    {if (n2>n3){printf("n2 (%f) is the greatest number.", n2);}
    else {printf("n3 (%f) is the greatest number.",n3);}}
    
    return 0;
}