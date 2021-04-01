#include<stdio.h>
#include<conio.h>
int main()
{
  char c;
  clrscr();
  printf("Enter any alphabet");
  scanf("%c",&c);
  switch(c)
  {
    case 'a':
      printf("vowel");
      break;
    case 'e':
      printf("vowel");
      break;
    case 'i':
      printf("vowel");
      break;
    case 'o':
      printf("vowel");
      break;
    case 'u':
      printf("vowel");
      break;
    default:
      printf("consonant");
 }
 getch();
 return 0;
}
