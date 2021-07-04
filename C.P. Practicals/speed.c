#include<stdio.h>
#include<conio.h>

int main()
{
float speed,displacement,time;

printf("Enter the displacement (in meters): ");
scanf("%f",&displacement);

printf("Enter the time (in seconds): ");
scanf("%f",&time);

speed = displacement/time;

printf("Speed of the body is: %f", speed);

return 0;
}