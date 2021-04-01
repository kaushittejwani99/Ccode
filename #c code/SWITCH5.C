#include<stdio.h>
#include<conio.h>
int main()
{
   int num;
   clrscr();
   printf("Enter any no:-");
   scanf("%d",&num);
   switch(num%2==0)
   {
      case 0:
      printf("odd");
      break;
      case 1:
      printf("even");
  }
  getch();
  return 0;
}