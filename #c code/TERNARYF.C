#include<stdio.h>
#include<conio.h>
int max(int num1,int num2,int num3)
{
    printf("--this function is check MAX from 3 no--\n");
    printf("Enter any three no:-");
    scanf("%d%d%d",&num1,&num2,&num3);
    num1>=num2 && num1>=num3?printf("%d is a max no.",num1):num2>=num3 &&num2>=num1?printf("%d is a max ",num2):printf("%d is a max",num3);
    return 0;
}
int even_odd(int num1)
{
   printf("--this function is check even/odd no--\n");
   printf("Enter any no:-");
   scanf("%d",&num1);
   num1%2==0?printf("%d is even no.",num1):printf(" %d is  odd no.",num1);
   return 1;
}
int negpos(int num1)
{
     printf("--this function is check the given no is negative or positive--\n");
     printf("Enter any no:-");
     scanf("%d",&num1);
     num1>0?printf("%d is positive no.",num1):num1<0?printf("%d is negative no.",num1):printf("%d is zero.",num1);
     return 0;
}
int divisible(int num1)
{
   printf("--this function is check the given is divisible by 5 & 11 or not--\n");
   printf("Enter any no:-");
   scanf("%d",&num1);
   num1%5==0 && num1%11==0?printf("%d is divisible by both 5 & 11.",num1):printf("%d is not divisible by both 5 & 11.",num1);
   return 0;
}
int months(int month)
{
   printf("--this function is check how many days in a given month by the user--\n");
   printf("Enter any month:-");
   scanf("%d",&month);
   month==1||month==3||month==5||month==7||month==8||month==10||month==12?printf("%d has 31 days.",month):month==4||month==6||month==9||month==11?printf("%d has 30 days.",month):printf("%d has 28 days.",month);
   return 0;
}
int leap_year(int year)
{
  printf("--this function is check given  year is leap year or not--\n");
  printf("Enter any year:-");
  scanf("%d",&year);
  year%4==0&&year%100!=0||year%400==0?printf("%d is a leap year",year):printf("%d is not a leap year",year);
  return 0;
}
int vowel_consonent( char c)
{
  printf("--this function is check given char is alphabet or constant--\n");
  printf("Enter any char:-");
  scanf("%c",&c);
  c=='a' ||c=='e'||c=='i'||c=='o'||c=='u'?printf("%c is a vowel.",c):printf("%c is a consonent.",c);
  return 0;
}
int upper_lower(char c)
{
    printf("--this function is check given alphabet is upper case o lower case---\n");
    printf("Enter any char:-");
    scanf("%c",&c);
    c>='a' && c<='z'?printf("%c is a lower case charcater.",c):printf("%c is a upper case character.",c);
    return 0;
}
int alphabet(char c)
{
   printf("--this function is check given char is alphabet or not--\n");
   printf("Enter any char:-");
   scanf("%c",&c);
   ((c>='a' && c<='z')&&(c>='A'&& c<='z')?printf("%c is a character.",c):printf("%c is not a character.",c));
   return 0;
}
int funccall()
{   int n;
    printf("Enter any no between 1 to 9");
    scanf("%d",&n);
    if(n==1)
    return max(n);
}
int main()
{   int function_call;


    clrscr();
    printf("Enter the below no given left before the function name and call the function...\n");
    printf("1 = Max()\n2 = Even_odd()\n3 = Negative/Positive()\n4 = Divisible()\n5 = Months()\n6 = Leap_year()\n7 = Vowel/Consonant()\n8 = Upper/Lower\n9 = Alphabet()\n Choose function to call between 1 to 9:-");
    scanf("%d",&function_call);
    funccall(function_call);

    getch();
    return 0;
}