#include<stdio.h>
#include<conio.h>
int main()
{
   char Alphabets;
   clrscr();
   printf("----this program is create to check the given char is vowel or consonatnt-----\n.");
   printf("Enter any  char:-");
   scanf("%c",&Alphabets);
   if(Alphabets=='a')
     printf(" %c is a vowel char.",Alphabets);
   else if(Alphabets=='e')
     printf(" %c is a vowel char.",Alphabets);
   else if(Alphabets=='i')
     printf("%c is a vowel char.",Alphabets);
   else if(Alphabets=='o')
     printf(" %c is a vowel char.",Alphabets);
   else if(Alphabets=='u')
    printf(" %c is a vowel char. ",Alphabets);
   else
    printf(" %c is a consonant char.", Alphabets);
    getch();
    return 89;
}



