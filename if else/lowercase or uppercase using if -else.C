#include<stdio.h>
#include<conio.h>
int main()
{
   char Alphabet;
   clrscr();
   printf("--This program is create to check the given Alphabet are upper case or lowercase--\n");
   printf("Enter any Alphabet:-");
   scanf("%c",&Alphabet);
   if(Alphabet>='a'&&  Alphabet<='z')
      printf("%c is a Lower case character.",Alphabet);
   else
      printf("%c is a Upper case character.",Alphabet);
   getch();
   return 1;
}
