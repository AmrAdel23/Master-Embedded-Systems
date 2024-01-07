/*
*
* Author : Amr
*
* C program to make simple calculator
*/

#include<stdio.h>
int main()
{
    char x;
    float operand_1 , operand_2;
    printf("Enter operator either + or - or * or / : ");
    scanf("%c",&x);
    printf("Enter two operand : ");
    scanf ("%f %f",&operand_1,&operand_2);
    switch(x)
    {
    case '+' : printf("%.2f + %.2f = %.2f",operand_1,operand_2,operand_1+operand_2);break;
    case '-' : printf("%.2f - %.2f = %.2f",operand_1,operand_2,operand_1-operand_2);break;
    case '*' : printf("%.2f * %.2f = %.2f",operand_1,operand_2,operand_1*operand_2);break;
    case '/' : printf("%.2f / %.2f = %.2f",operand_1,operand_2,operand_1/operand_2);break;
    }


  return 0;
}
