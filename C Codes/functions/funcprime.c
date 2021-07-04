/**
 * @file funcprime.c
 * @author Shantanu Mane (shantanu.mane.200@outlook.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-29
 * @p Green
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include<conio.h>
/*
*Code Green, code works fine and gives result.
*/
int check_prime(int *);

int main()
{
  int n, result;

  printf("Enter an integer to check whether it is prime or not: ");
  scanf("%d", &n);

  result = check_prime(&n);

  if (result == 1)
    printf("%d is prime.\n", n);
  else
    printf("%d is not prime.\n", n);

  return 0;
}

int check_prime(int *a)
{
  int c, flag;

  for (c = 2; c <= *a - 1; c++)
  {
    if (*a % c == 0)
    {
      return 0;
    } 
    
  }
  return 1;
}
