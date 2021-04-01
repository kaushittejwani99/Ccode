#include<stdio.h>
#include<conio.h>
int divisible(int num1)
{
   num1%5==0 && num1%11==0?printf("%d is divisible by both 5 & 11.",num1):printf("%d is not divisible by both 5 & 11.",num1);
   return 0;
}
int main()
{
   int num;
   clrscr();
   printf("Enter any no.");
   scanf("%d",&num);
   divisible(num);
   getch();
   return 0;
}