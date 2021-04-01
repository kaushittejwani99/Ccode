#include<stdio.h>
#include<conio.h>
int vowel_consonent( char c)
{
  c=='a' ||c=='e'||c=='i'||c=='o'||c=='u'?printf("%c is a vowel.",c):printf("%c is a consonent.",c);
  return 0;
}
int main()
{
  char c;
  clrscr();
  printf("Enter any Alphabet.");
  scanf("%c",&c);
  vowel_consonent(c);
  getch();
  return 0;
}