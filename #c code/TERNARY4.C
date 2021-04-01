#include<stdio.h>
#include<conio.h>
int negpos(int num1)
{
    num1>0?printf("%d is positive no.",num1):num1<0?printf("%d is negative no.",num1):printf("%d is zero.",num1);
    return 0;
}
int main()
{
    int num;
    clrscr();
    printf("Enter any no.");
    scanf("%d",&num);
    negpos(num);
    getch();
    return 0;
}