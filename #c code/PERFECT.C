#include<stdio.h>
#include<conio.h>
int main()
{
    int i,num,sum=0;
    clrscr();
    for( i=0;i<=num;i++)
    {
	if(num%i==0)
	sum=sum+i;
    }
    if(sum==num)
    printf("%d is a perfect no.",num);
    else
    printf("%d is  not a perfect no.",num);
    getch();
    return 0;
}