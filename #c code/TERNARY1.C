#include<stdio.h>
#include<conio.h>
int months(int month)
{
   month==1||month==3||month==5||month==7||month==8||month==10||month==12?printf("%d has 31 days.",month):month==4||month==6||month==9||month==11?printf("%d has 30 days.",month):printf("%d has 28 days.",month);
   return 0;
}
int main()
{
   int month;
   clrscr();
   printf("Enter any month:-");
   scanf("%d",&month);
   months(month);
   getch();
   return 0;
}