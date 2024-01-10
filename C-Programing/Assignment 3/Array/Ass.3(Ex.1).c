/*
* Author : Amr
* Date : 9/1/2024
*  C program to find sum of two matrix element entered by user
*/


#include<stdio.h>
int main ()
{
    float a[2][2];
    float b[2][2];
    float sum[2][2];
    int i,j;
    // take element of first matrix
    printf("Enter the elements of first matrix : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
           printf("Enter a%d%d : ",i+1,j+1);
            scanf("%f",&a[i][j]);
        }
    }
     // take element of second matrix
     printf("Enter the elements of second matrix : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Enter b%d%d : ",i+1,j+1);
            scanf("%f",&b[i][j]);
        }
    }
    printf("sum of matrix : \n");
    // print sum of matrix
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sum[i][j]=a[i][j] + b[i][j];
            printf("%0.1f ",sum[i][j]);
        }
        printf("\n");
    }

}
