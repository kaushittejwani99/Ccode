#include<iostream.h>
#include<conio.h>
int fibonacchi(int n)
{
  if (n<=1)
  {
    return 1;
  }
  return (n-1)+(n) ;
}
void main()
{
    clrscr();
    int a;
    cout<<"enter  your no"<<endl;
    cin>>a;
    cout<<"the fibonacchi series are"<<fibonacchi(a);
    getch();
}