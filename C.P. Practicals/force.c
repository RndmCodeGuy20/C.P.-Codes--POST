#include<stdio.h>
#include<conio.h>

int main()
{
float force,mass,accel;

printf("Enter the mass of the body (In Kg): ");
scanf("%f",&mass);

printf("Enter the acceleration of the body (In m/s^2): ");
scanf("%f",&accel);

force=mass*accel;

printf("Force experienced by the body is (In Newton): %f", force);

return 0;
}