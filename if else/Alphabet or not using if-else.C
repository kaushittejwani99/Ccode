#include<stdio.h>
#include<conio.h>
int main()
{
   char characters;
   clrscr();
   printf("-----This programm is create to check the given no is alphabet or not-----\n");
   printf("Enter any char:-");
   scanf("%c",&characters);
   if(characters>='a' && characters<='z')
      printf("%c is a alphabet.",characters);
   else if(characters>='a' &&  characters<='z')
	printf(" %c is  a alphabet.");
   else
      printf(" %c is not  a alphabet.  ",characters);
   getch();
   return 1;
}