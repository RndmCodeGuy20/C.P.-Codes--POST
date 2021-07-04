	#include<stdio.h>
	#include<conio.h>

	int main()
    {
		int total,workdays,holidays;

		printf("enter your workdays and holidays: ");
		scanf("%d %d",&workdays,&holidays);

		total = workdays - holidays;

		if (total>=28){printf("your salary is 300");}
		else{
			
		if (total>=25){printf("your salary is 250");}
		else{
			
		if (total>=20){printf("your salary is 200");}
		else{
			if (total>=15){printf("your salary is 150");}
		}}}

			
	return 0;
    }