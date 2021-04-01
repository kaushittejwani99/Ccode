#include<stdio.h>
#include<conio.h>
int armstrong(int num);
int main()
{
   int num;
   clrscr();
   printf("Enter any no:-");
   scanf("%d",&num);
   armstrong(num);
   getch();
   return 0;
}
 int armstrong(int num)
 {
   int i,a,lastdigit,sum=0,num1,length=1;
   num1=num;
   while(num!=0)
   {
      lastdigit=num%10;
      length++;
      for(i=1;i<=length;i++)
      {
	a=(num%10)^^length;
	sum=sum+a;

      }
    num=num/10;
   }

    if(sum==num1)
    printf("%d is a armstrong no.",num1);
    else
    printf("%d is not a armstrong no.",num1);
    return 0;
 }

