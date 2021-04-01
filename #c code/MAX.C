#include<stdio.h>
#include<conio.h>
int max(int num1,int num2,int num3)
{
	num1>num2 && num1>num3 ?printf("%d is max no.",num1):num2>num3 && num2>num1?printf("%d is max no.",num2):printf("%d is max no.",num3);
	 return 0;
}

int main()
{
   int num1 ,num2,num3;
   printf("Enter any three no.");
   scanf("%d%d%d",&num1,&num2,&num3);
   max(num1,num2,num3);
   getch();
   return 0;
}