#include<stdio.h>
#include<conio.h>
int even_odd(int num1)
{
   num1%2==0?printf("%d is even no.",num1):printf(" %d is  odd no.",num1);
   return 1;
}
int main()
{
   int num;
   clrscr();
   printf("Enter any no.");
   scanf("%d",&num);
   even_odd(num);
   getch();
   return 0;
}

