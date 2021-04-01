#include<stdio.h>
#include<conio.h>
int getDiameter()
{
   int radius;
   printf("---This function creates for calculate the Diameter of circle---\n");
   printf("Enter the radius of the circle:-");
   scanf("%d",&radius);
   return 2*radius;
}
int getCircumference()
{
    int Diameter;
    float circumference;
   printf("---This function creates for calculate the Circumference of circle---\n");
   printf("Enter the Diameter of circle:-");
   scanf("%d",&Diameter);
   circumference=Diameter*3.14;//3.14 is the value of pi
   printf("the Circumference of the circle is", circumference);
   return 0;
}
int getArea()
{  int Diameter;
  float area;
  printf("--this function creates for calculate the Area of  circle---\n");
  printf("Enter the Diamter of circle:-");
  scanf("%d",&Diameter);
  area=Diameter*3.14;//3.14 is the value of pi
  return area;
}
int main()
{
  int op;
  clrscr();
  printf("--Choose any operation No between 3 of them to perform\n" );
  printf("1.Find Diamter of circle\n");
  printf("2.Find Circumference of circle\n");
  printf("3.Find Area of circle\n");
  scanf("%d",&op);
  if(op==1)
   return getDiameter();
  if(op==2)
   return getCircumference();
  if(op==3)
   return getArea();
  else
  printf("Invalid input");
  getch();
  return 0;
}



