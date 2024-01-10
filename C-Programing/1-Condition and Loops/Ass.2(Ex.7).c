/*
*
* Author : Amr
*
* C program to find the factorial Number
*/

#include<stdio.h>
int main()
{
    int x,i,factorial = 1;
    printf("Enter an Integer : ");
    scanf("%d",&x);
    if(x<0)
    {
        printf("Error !!, their is not factorial for negative Number");
    }
    else
    {
        for(i=x;i>0;i--)
        {
            factorial *= i;
        }
        printf("Factorial of (%d) = %d",x,factorial);
    }


  return 0;
}
