#include<stdio.h>
#include<conio.h>
int cube(int num)
{
    printf("--This funcion creates for print the cube of given no---\n");
    num=num*num*num;
    return num;
}
int main()
{
  int num;
  clrscr();
  printf("Enter any no:-");
  scanf("%d",&num);
  printf("The cube of the %d is %d.",num,cube(num));
  getch();
  return 0;
}