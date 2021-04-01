#include<stdio.h>
#include<conio.h>
int main()
{
    int tri1,tri2,tri3,sum;
    clrscr();
    printf("-----prg to check triangle is valid or not---\n");
    printf("Enter three angles:-");
    scanf("%d%d%d",&tri1,&tri2,&tri3);
    sum=tri1+tri2+tri3;
    if(sum==180 && tri1>0 &&tri2>0 &&tri3>0)
      printf("Traingle is valid.");
      else
	printf("Triangle is not valid.");
    getch();
    return 0;
}
