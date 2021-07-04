#include<stdio.h>
#include<conio.h>

#include<string.h>

int main()
{
  int n, reverse=0, rem,norm;    
printf("Enter a number: ");    
  scanf("%d", &n);   
  norm = n; 
  while(n!=0)    
  {    
     rem=n%10;    
     reverse=reverse*10+rem;    
     n/=10;    
  }    
  printf("Reversed Number: %d\n",reverse); 

  printf("Normal number was: %d\n",norm);
  if(reverse==norm){printf("yes equal");}
  else{printf("not equal");}  

return 0;
}