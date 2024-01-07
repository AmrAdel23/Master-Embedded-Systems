/*
 * Ass2(Ex.2).c
 *
 *  Created on: ??ş/??ş/????
 *      Author: Amr
 *   find largest number from 3 number 
 */

#include <stdio.h>
int main ()
{
    int a , b , c;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    printf("Enter the third number : ");
    scanf("%d",&c);
    if (a>b)
    {
        if(a>c)
        {
            printf("the largest number is %d",a);
        }
        else
        {
            printf("the largest number is %d",c);
        }
    }
    else if (b>c)
    {
        printf("the largest number is %d",b);
    }
    else
    {
        printf("the largest number is %d",c);
    }
    return 0 ;
}




