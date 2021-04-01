#include<iostream.h>
#include<conio.h>
int main()
{
   int n,r,sum=0,temp;
   cin>>n;
   temp=n;
   while(n>0)
   {
      r=n%10;
      sum=(sum*10)+r;
      n=n/10;
   }
   if(temp==sum)
   cout<<"p"<<endl;
   else
   cout<<"n";
   return 0;
}