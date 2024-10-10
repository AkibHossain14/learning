#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   int num1, num2 ;
   int *p1, *p2;

   num1=55;
   num2= 33;
   p1=&num1;
   p2=&num2;

   cout<< num1 <<endl <<num2 <<endl ;
   cout<< p1 <<endl <<p2 <<endl ;
   cout<< *p1 <<endl <<*p2 <<endl ;
   cout<< &num1 <<endl <<&num2 <<endl ;

   int sum= num1+num2;
   cout<< sum <<endl;

   int sum2=*p1+*p2;
   cout<< sum2;










   getch();
}
