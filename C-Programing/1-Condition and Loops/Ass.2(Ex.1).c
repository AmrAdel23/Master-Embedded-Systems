/*
 ============================================================================
 Name        : 1.c
 Author      : Amr
 Version     :
 Copyright   : Ass2(Ex.1)
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int Number;
	printf("Enter the Number : ");
	fflush(stdout);  fflush(stdin);
	scanf("%d",&Number);
	if ((Number%2)==0)
	{
		printf("Number (%d) is even",Number);
	}
	else if ((Number%2)!=0)
	{
		printf("Number (%d) is odd",Number);
	}
	else
	{
		printf("your Enter is wrong");
	}

	return EXIT_SUCCESS;
}
