#include<stdio.h>
#include<conio.h>
int main()
{
  int side1,side2,side3;
  clrscr();
  printf("---program to check the triangle is equilateral,isoscales,scalene----\n");
  printf("Enter 3 sides:-");
  scanf("%d%d%d",&side1,&side2,&side3);
  if(side1==side2 && side2==side3)
    printf("The traingle is Equilateal.");
  else if(side1==side2||side2==side3||side3==side1)
    printf("The triangle is isoscalese.");
   else
    printf("The triangle is scalene.");
    getch();
    return 0;
}
