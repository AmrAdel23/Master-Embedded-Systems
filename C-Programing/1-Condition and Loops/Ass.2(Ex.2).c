/*
 * Ass2(Ex.2).c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Amr
 *      check number vowel or consonant
 */

#include <stdio.h>

int main ()
{
   char x;
   printf("Enter character : ");
   fflush(stdout);  fflush(stdin);
   scanf("%c",&x);
   if((x=='i')||(x=='o')||(x=='u')||(x=='e')||(x=='a'))
   {
	   printf("Character %c is Vowel  ",x);
   }
   else
   {
	   printf("character %c is consonant",x);
   }


	return 0;
}
