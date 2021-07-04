#include<stdio.h>
#include<conio.h>
#include<math.h>
#define Pi 3.141592

int main()
{
    float area,radius,circumference;

    printf("Enter the Radius of the Circle: ");
    scanf("%f",&radius);

    area = Pi*(radius*radius);

    circumference = 2*Pi*radius;

    printf("Area of the required circle is: %f\n", area);

    printf("Circumference of the required circle is: %f\n", circumference);


return 0;
}