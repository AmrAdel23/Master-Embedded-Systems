/*
* Author : Amr
* Date : 9/1/2024
*
*   C program to find the length of a string without strlen function
*/

#include <stdio.h>
int main()
{
  char str[1000];
  int i,count=0;
  printf("Enter the string : ");
  gets(str);

  for(i=0;str[i]!='\0';i++)
  {
      count++;
  }
  printf("Length of string = %d",count);

}
