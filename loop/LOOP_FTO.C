#include<stdio.h>
#include<conio.h>
int main()
{
   int i ,num,factorial=1,sum=0;
   clrscr();
   printf("Enter any no :-");
   scanf("%d",&num);
   for(i=num;i>=1;i--)
   {
      if (num==0||num==1)
      printf("1");
      else
	 factorial=factorial*i;

   }
   printf("%d",factorial);
   getch();
   return 0;
}
