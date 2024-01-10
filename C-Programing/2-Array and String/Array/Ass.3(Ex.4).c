/*
* Author : Amr
* Date : 9/1/2024
*  C program to Insert an element in an array
*/


#include<stdio.h>
int main ()
{
    int size,location,element;
    int i;
    int arr[30];
    printf("Enter no of element : ");
    scanf("%d",&size);
    printf("Enter element : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the element to be inserted :" );
    scanf("%d",&element);
    printf("Enter the location : ");
    scanf("%d",&location);

    // create space at specified location
    for(i=size;i>=location;i--)
    {
        arr[i]=arr[i-1];
    }

    arr[location-1]=element;
    // print the result
    for (i=0;i<=size;i++)
    {
        printf ("%d ",arr[i]);
    }

}
