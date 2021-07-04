/**
 * @file studdata.c
 * @author Shantanu Mane (shantanu.mane.200@outlook.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <conio.h>

struct student_data
{
    char first_name[20];
    int roll_num;
    float marks1, marks2, marks3;
    float avg;
} st[5];

int main()
{
    int i;
    
    printf("Enter the information of students: ");

    for (i = 0; i < 5; i++)
    {
        st[i].roll_num = i + 1;
        printf("\n For student having Roll Number: %d\n", st[i].roll_num);
        printf("\nEnter the first name of the student: ");
        scanf("%s", st[i].first_name);

        printf("\nEnter the marks for subject PHY,MAT,CHEM: ");
        scanf("%f %f %f", &st[i].marks1, &st[i].marks2, &st[i].marks3);
    }

    printf("\nDisplaying the aggregate marks of student according to his first name: \n\n\n");

    for (i = 0; i < 5; i++)
    {
        printf("First name: %s\n", st[i].first_name);
        
        st[i].avg = (st[i].marks1 + st[i].marks2 + st[i].marks3) / 3;

        printf("\nAggregate Marks by the student: %.2f", st[i].avg);

        printf("\n\n");
    }

    return 0;
}