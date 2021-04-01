#include<stdio.h>
#include<conio.h>
int leap_year(int year)
{
  year%4==0&&year%100!=0||year%400==0?printf("%d is a leap year",year):printf("%d is not a leap year",year);
  return 0;
}
int main()
{
   int year;
   clrscr();
   printf("Enter any year.:-");
   scanf("%d",&year);
   leap_year(year);
   getch();
   return 0;
}
