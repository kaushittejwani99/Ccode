#include<stdio.h>
#include<conio.h>
int main()
{
  int i,j,rows;
  clrscr();
  printf("Enter any  no of rows");
  scanf("%d",&rows);
  for(i=1;i<=rows;i++)
  {
     for(j=1;j<=(2*i-2);j++)
     {
	printf(" ");
     }
     for(j=i;j<=rows;j++)
     {
	printf("*");
     }
     printf("\n");
  }
  for(i=1;i<=rows-1;i++)
  {
     for(j=rows;j>=(2*i-2);j--)
     {
	printf(" ");
     }
     for(j=1;j<=i;j++)
     {
	printf("*");
     }
     printf("\n");
  }
  getch();
  return 0;
}

