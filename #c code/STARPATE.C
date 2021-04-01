#include<stdio.h>
#include<conio.h>
int main()
{
   int i,j,rows;
   clrscr();
   printf("Enter the no of rows.");
   scanf("%d",&rows);
   for(i=1;i<=rows;i++)
   {
     for(j=1;j<=rows+i;j++)
     {
	 printf(" ");
     }
     for(j=1;j<=rows;j++)
     {
       printf("*");
     }
     printf("\n");
   }
   getch();
   return 0;
}