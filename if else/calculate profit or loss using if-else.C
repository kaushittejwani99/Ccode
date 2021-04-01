#include<stdio.h>
#include<stdio.h>
int main()
{
    int cp,sp,amount;
    clrscr();
    printf("Enter cost price:");
    scanf("%d",&cp);
    printf("Enter selling price:");
    scanf("%d",&sp);
    if(sp>cp)
    {
       amount=sp-cp;
       printf("profit = %d",amount);
    }
    else if(cp>sp)
    {
       amount=cp-sp;
       printf("loss=%d",amount);
    }
    else
    printf("No profit,No loss");
    getch();
    return 0;
 }