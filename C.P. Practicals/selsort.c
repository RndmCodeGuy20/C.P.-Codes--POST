#include<stdio.h>
#include<conio.h>

int main()
{
int i,j,n,temp,array[100];

printf("Enter the number of elements in the array: ");
scanf("%d", &n);

printf("Enter the elements: ");
for ( i = 0; i < n; i++)
{
    scanf("%d", &array[i]);
}

for ( i = 0; i < n; i++)
{
    for ( j = i+1; j < n; j++)
    {
        if (array[i]>array[j])
        {
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
        }
        
    }
    
}


printf("Sorted array: \n");
for ( i = 0; i < n; i++)
{
    printf("%d\t", array[i]);
}

return 0;
}