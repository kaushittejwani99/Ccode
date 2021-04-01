#include<stdio.h>
#include<conio.h>
int main()
{
  int i,sum=0;
  clrscr();
  for(i=0;i<=10;i++)
  {
     if(i%2==0)
	sum+=i;
  }
  printf("%d",sum);
  getch();
  return 0;
}