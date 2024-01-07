/*
*
* Author : Amr
*
* c program to calculate sum of natural number
*/

#include<stdio.h>
int main()
{
  int x,i,sum=0;
  printf("Enter the integer Number : ");
  scanf("%d",&x);
  for(i=1;i<=x;i++)
  {
      sum +=i;
  }
  printf("sum = %d",sum);

  return 0;
}
