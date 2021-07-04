/**
 * @file writefile.c
 * @author Shantanu Mane (shantanu.mane.200@outlook.com)
 * @brief 
 * @version 0.1
 * @date 2021-05-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include<conio.h>

struct student
{
    char name[30];
    int roll;
    float fee_status;
};


int main()
{
    int num_stud;

    printf("Enter the number of students: ");
    scanf("%d",&num_stud);
    
    FILE *fptr;
    fptr = fopen("C:\\C.P. Codes\\C.P. Practicals\\Stud_info_file.txt", "w");

    if (fptr==NULL)
    {
        printf("Error Opening the File!!!");
        return 1;
    }
    
    struct student info[num_stud];

    for (int i = 0; i < num_stud; i++)
    {
        printf("For student %d:\n", i+1);
        fprintf(fptr,"\nFor student %d:\n", i+1);
        
        printf("\nName: ");
        scanf("%s", &info[i].name);
        fprintf(fptr,"Name: %s\n",info[i].name);

        printf("Roll number: ");
        scanf("%d", &info[i].roll);
        fprintf(fptr, "Roll number: %d\n", info[i].roll);

        printf("Fees Paid: ");
        scanf("%f", &info[i].fee_status);
        fprintf(fptr, "Fees Paid: %f\n", info[i].fee_status);
    }
    
    fclose(fptr);

return 0;
}