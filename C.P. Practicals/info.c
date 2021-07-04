#include<stdio.h>
#include<conio.h>

int main()
{
char name[20], fees[20], gender[20];
int rollnum;
float percentage;

printf("\nEnter the Candidate's Name: ");
scanf("%s", &name);

printf("\nEnter if fees paid or not: ");
scanf("%s", &fees);

printf("\nEnter Gender of the Candidate: ");
scanf("%s", &gender);

printf("\nEnter the roll number of the Candidate: ");
scanf("%d", &rollnum);

printf("\nEnter the percentage obtained by candidate in previous examination: ");
scanf("%f", &percentage);

printf("\n\nName: %s\n\n", name);
printf("Roll Number: %d\n\n", rollnum);
printf("Fees Status:%s\n\n", fees);
printf("Gender: %s\n\n", gender);
printf("Percentage in latest examination: %.3f", percentage);

return 0;
}