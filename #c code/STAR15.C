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
      for(j=1;j<=i;j++)
      {
	  printf("*");
      }
      printf("\n");
  }
  for(i=1;i<=rows;i++)
  {
     for(j=rows;j>=i;j--)
     {
	printf("*");
     }
     printf("\n");
  }
  getch();
  return 0;
}