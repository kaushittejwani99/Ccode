#include<stdio.h>
#include<conio.h>
int main()
{
  int num;
  clrscr();
  printf("this program Create to check the given no is Divisible by 5 & 11 or not.\n");

  printf("----Enter your no-----:-");
  scanf("%d",&num);
  if(num%5==0&&num%11==0)
     printf("The no is divisible by 5 & 11.\n");
  else
     printf("The no is not divisible by 5 & 11.\n");
  printf("Checking successfully");
  getch();
}