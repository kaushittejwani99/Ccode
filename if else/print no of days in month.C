#include<stdio.h>
#include<conio.h>
int main()
{
   int month_no;
   clrscr();
   printf("-------print no of days in month------\n");
   printf("Enter any month no between 1 to 12:-");
   scanf("%d",&month_no);
   if( month_no==1|| month_no==3 ||month_no==5||month_no==7||month_no==8||month_no==10||month_no==12);
   printf("%dth month has 31 days.");
	 else if( month_no==4||month_no==6||month_no==9||month_no==11)
	   printf("%d month has 30 days.");
       else
	   printf("%d month has 28 days.");
   getch();
   return 1;

}
