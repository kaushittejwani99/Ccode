#include<stdio.h>
#include<conio.h>
int main()
{
  int i,a,j,sum=0,start,ending,factorial,num;
  clrscr();
  printf("Enter any starting point:-");
  scanf("%d",&start);
  printf("Enter any ending point:-");
  scanf("%d",&ending);
  for(i=start;i<=ending;i++)
  {
     printf("i=%d",i);
     a=i%10;
     printf("a=%d",a);
     factorial=1;
     for(j=1;j<=a;j++)
     {
	factorial=factorial*j;

     }
     sum=sum+factorial;
     num=i/10;


}
if(sum==i)
    printf("%d",i);

 getch();
 return 0;
}