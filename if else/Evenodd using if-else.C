#include<stdio.h>
#include<conio.h>
int main()
{
  int num;
  clrscr();
  printf("Enter any no.:-");
  scanf("%d",&num);
  if(num%2==0)
    printf("%d is even no.");
  else
     printf("%d is odd no.");
  getch();
  return 0;
}