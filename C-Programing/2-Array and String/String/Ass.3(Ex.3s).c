/*
* Author : Amr
* Date : 9/1/2024
*
*   C program to Reverse string without using library function
*/

#include <stdio.h>
int main()

{
    char str[100];
    char rev[100];
    int i,j,count=0;

    printf("Enter the string : ");
    gets(str);
    // get length of string
    for(i=0;str[i]!='\0';i++)
    {
        count++;
    }
    j=count-1;
    i=0;
    while(i<count)
    {
        rev[i]=str[j];
        i++;
        j--;
    }
    rev[count]='\0';
    printf("Reverse String : ");
    printf("%s",&rev);
}
