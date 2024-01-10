/*
* Author : Amr
* Date : 9/1/2024
*  C program to search an element in array
*/


#include<stdio.h>
int main ()
{
    int n,element;
    int arr[30];
    int i;

    printf("Enter number of element : ");
    scanf("%d",&n);
    printf("Enter the element : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the element to be searched : ");
    scanf("%d",&element);

   // search from 0
   i=0;
   while ((i<n) && (arr[i] != element))
   {
	   i++;
   }	   
   
   // if i < n number is found
   if(i<n)
   {
	   printf("Number is found in location = %d",i+1);
   }
   else 
   {
	   printf("Number not found");
   }
   
   return 0;
   
}
