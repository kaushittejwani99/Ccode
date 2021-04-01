#include<stdio.h>
#include<conio.h>
int evenodd(int num)
{
      printf("--This function is check the given no is even or odd--\n");
      if(num%2==0)
      printf("%d is even no.",num);
      else if(num%2!=0)
      printf("%d is odd no.",num);
      else
      printf("Invalid input ,please give a valid input");
      return 0;
}
int main()
{
 int num;
 clrscr();
 printf("Enter any no:-");
 scanf("%d",&num);
 evenodd(num);
 getch();
 return 0;
}
