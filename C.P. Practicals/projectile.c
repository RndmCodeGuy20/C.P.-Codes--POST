#include<stdio.h>
#include<conio.h>

int main()
{
float s,u,t,g=9.83,i1,i2;

printf("Enter the initial velocity of body (in m/s): ");
scanf("%f",&u);

printf("Enter the time taken by the object to cover the distance (in seconds): ");
scanf("%f",&t);

i1 = u*t;
i2 = 0.5*g*t*t;
s = i1 + i2;

printf("Value of 'g' is taken as 9.83\n\n");

printf("Displacement covered by the body (in meters): %f", s);

return 0;
}