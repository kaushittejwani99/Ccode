#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i;
    clrscr();
    printf("Enter  a no:-");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
       if(num%i==0)
       printf("%d ",i);
    }
    getch();
    return 0;
}