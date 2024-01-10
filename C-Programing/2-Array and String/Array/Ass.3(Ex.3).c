/*
* Author : Amr
* Date : 9/1/2024
*  C program to find transpose matrix
*/


#include<stdio.h>
int main ()
{
    int row,colume,i,j;
    printf("Enter rows and column of matrix : ");
    scanf("%d %d",&row,&colume);
    int arr[row][colume];
    // take element from user
    for(i=0;i<row;i++)
    {
        for(j=0;j<colume;j++)
        {
            printf("Enter element a%d%d: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    // print matrix that entered
    printf("Entered Matrix :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<colume;j++)
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    // print matrix after transpose
    printf("Transpose of Matrix :\n");
    for(i=0;i<colume;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }



}

