#include<stdio.h>
#include<conio.h>
int main()
{
  int week_num;
  clrscr();
  printf("--This porgram is create to input week number and print week day--\n");
  printf("Enter any no between 1 to 7:-");
  scanf("%d",&week_num);
  if(week_num==1)
    printf("Sunday");
    else if(week_num==2)
      printf("Monday");
      else if(week_num==3)
	 printf("Tuesday");
	 else if(week_num==4)
	   printf("Wednesday");
	   else if(week_num==5)
	     printf("Thrusday");
	     else if(week_num==6)
	      printf("Friday");
	      else if(week_num==7)
	       printf(" Saturday");
	       else
		printf("%d not in week.",week_num);
   getch();
   return 1;
}