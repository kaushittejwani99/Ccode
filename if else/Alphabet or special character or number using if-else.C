#include<stdio.h>
#include<conio.h>
int main()
{
   char characters;
   clrscr();
   printf("--This program is create to check the given char is Alphabet,Numbers or Special Characters--\n");
   printf("Enter any char:-");
   scanf("%c",&characters);
   if((characters>='a' && characters<='z') || (characters>='A' && characters<='Z'))
	printf("%c is a Alphabet",characters);
  else if(characters>='1'&& characters<='10')
	  printf("%c is a No.",characters);
  else
	  printf("%c is a Special characters",characters);
   getch();
   return 1;
}
