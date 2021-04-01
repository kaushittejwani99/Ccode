#include<stdio.h>
#include<conio.h>
int upper_lower(char c)
{
    c>='a' && c<='z'?printf("%c is a lower case charcater.",c):printf("%c is a upper case character.",c);
    return 0;
}
int main()
{
   char c;
   clrscr();
   printf("Enter any char.");
   scanf("%c",&c);
   upper_lower(c);
   getch();
   return 0;
}