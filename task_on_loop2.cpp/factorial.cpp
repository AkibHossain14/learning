#include <iostream>
#include <conio.h>
using namespace std ;

int main ()
{
 int num, mul=1;
 cout<< " enter your number :"  ;
 cin>>num ;
 for (int i=1; i<=num;  i++)
 {
    mul = mul*i;
 }
    cout<< " factorial of " << num <<" is  :" <<mul;




    getch ();
}
