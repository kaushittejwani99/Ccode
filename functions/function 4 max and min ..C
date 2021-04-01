#include<stdio.h>
#include<conio.h>
int max(int num1,int num2)
{
   printf("--This function create to check max between two given no--\n");
   if(num1>num2)
   printf("%d is max no.",num1);
   else
   printf("%d is max  no.",num2);
   return 0;
}
int min(int num1,int num2)
{
   printf("\n--this function create to check min between two  given no--\n");
   if(num1<num2)
   printf("%d is min no.",num1);
   else
   printf("%d is min no.",num2);
   return 0;
}
int main()
{
   int num1,num2;
   clrscr();
   printf("Enter two numbers to check Max and Min between them\n.");
   printf("Enter 1st no:-");
   scanf("%d",&num1);
   printf("Enter 2nd no:-");
   scanf("%d",&num2);
   max(num1,num2);
   min(num1,num2);
   getch();
   return 0;
}
