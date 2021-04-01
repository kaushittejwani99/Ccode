#include<stdio.h>
#include<conio.h>
void p(int *p)
{
    *p=*p+1;
}

int main()
{
   int a=10 ;
   printf("%d\n",a);
   p(&a);
   printf("a after +1 is %d",a);
   getch();
}