#include<stdio.h>
#include<conio.h>
int main()
{
   int i,sum=0,a,factorial=1,original,num;
   clrscr();
   printf("Enter  any no:-");
   scanf("%d",&num);
   original=num;
   while(num>0)
   {
      a=num%10;
      for(i=1;i<=a;i++)
      {
	 factorial=factorial*i;
      }
      sum=sum+factorial;
      num=num/10;
   }
   if(sum==original)
   printf("%d is a strong no.",original);
   else
   printf("%d is not a strong no.",original);
   getch();
   return 0;
}


