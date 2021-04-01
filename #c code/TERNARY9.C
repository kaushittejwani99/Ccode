#include<stdio.h>
#include<conio.h>
int week_day(int week_no)
{
   week_no==0 ? printf("Sunday") || week_no==1 ? printf("Monday")|| week_no==2 ? printf("Tuesday") : printf("d");
   return 0;
}
int main()
{
     int week_no;
     clrscr();
     printf("Enter week_no between 0 to 6.");
     scanf("%d",&week_no);
     week_day(week_no);
     getch();
     return 0;
}

