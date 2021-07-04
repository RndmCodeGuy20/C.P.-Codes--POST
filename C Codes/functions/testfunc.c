#include <stdio.h>
#include <conio.h>

struct student
{
    char name[20];
    int roll_num;
    long long phone_num;
} st1;

int main()
{
    printf("Enter the credentials of the student: ");
    scanf("%s %d %lld", &st1.name, &st1.roll_num, &st1.phone_num);

    printf("%s %d %lld", st1.name, st1.roll_num, st1.phone_num);

    return 0;
}