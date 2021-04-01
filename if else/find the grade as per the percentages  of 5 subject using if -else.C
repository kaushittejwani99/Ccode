#include<stdio.h>
#include<conio.h>
int main()
{
    int math,pys,cms,eng,hndi;
    float per;
    clrscr();
    printf("Enter marks:");
    scanf("%d%d%d%d%d",&math,&pys,&cms,&eng,&hndi);
    per=(math+pys+cms+eng+hndi)/5.0;
    printf("percentage = %2f\n",per);
    if(per>=90)
     printf("Grade A");
     else if(per>=80)
     printf("Grade B");
     else if(per>=70)
     printf("Grcade C");
     else if(per>=60)
     printf("Grade D");
     else if(per>=40)
     printf("Grade E");
     else
     printf("Grade F");
     getch();
     return 0;
}

