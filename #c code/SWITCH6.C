#include<stdio.h>
#include<conio.h>
int main()
{
   int num1,num2;
   clrscr();
   printf("Enter any two numbers");
   scanf("%d%d",&num1,&num2);
   switch(num1>num2)
   {
      case 0:
      printf("%d is maximum",num2);
      break;
      case 2:
      printf("%d is maximum",num1);
      break;
   }
   getch();
   return 0;
}