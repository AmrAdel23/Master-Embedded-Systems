/*
* Author : Amr
* Date : 9/1/2024
*  C program to calculate Average using array
*/


#include<stdio.h>
int main ()
{
    int n,i;
    float arr[10];
    float aver=0;

    printf("Enter the number of data :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d. Enter number : ",i+1);
        scanf("%f",&arr[i]);
        aver+= arr[i];
    }
    aver = aver / n;
    printf("Average = %0.2f",aver);



}
