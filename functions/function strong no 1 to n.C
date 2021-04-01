#include<stdio.h>
#include<conio.h>
int printstrong(int start  int end)
{
    int i,j,num;
    for(i=start;i<=end;i++)
    {
       num=i;
       a=i%10;
       for(i=1;i<=a;i++)
       {
	  fact=fact*i;
	  sum=sum+fact;
       }
       i=i%10;
    }
    if(sum==num)
    printf("%d is a strong no.",num);
    else
    printf("%d is not a strong no.",num);
}
int main()
{
   int start ,end;
   printf("Enter the starting & ending point :-");
   scanf("%d",&start,&end);
   printstrong(start,end);
   getch();
   return 0;
}



