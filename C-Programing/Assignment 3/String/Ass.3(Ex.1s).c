/*
* Author : Amr
* Date : 9/1/2024
*
*   C program to find the frequency of character in a string
*/

#include <stdio.h>
int main()
{
    char N;
    char str[100];
    int i;
    int count = 0;

    printf("Enter a string :");
    gets(str);

    printf("Enter a character to find frequency :");
    scanf("%c",&N);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==N)
        {
            count++;
        }
    }
    printf("frequency of %c = %d ",N,count);
    return 0;
}
