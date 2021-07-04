#include<stdio.h>
#include<conio.h>

int main()
{
    float height,weight,BMI;

    printf("Enter the candidate's height(in mtr) and weight(in kg.) respectively: ");
    scanf("%f %f", &height, &weight);

    BMI = weight/(height*height);

    if(BMI>=25.0){
        printf("Candidate is overweight.\nHis/her BMI is = %f",BMI);
    }
    else if(BMI>=18.5&&BMI<=24.9){
        printf("Candidate is healthy.\nHis/her BMI is = %f",BMI);
    }
    else if(BMI<18.5){
        printf("Candidate is underweight.\nHis/her BMI is = %f",BMI);
    }
    else{printf("Invalid input.\n");
    }

return 0;
}