#include<iostream>
#include<conio.h>
using  namespace std ;
int main ()
{
 int year ;
 cout<< " enter any year between 1900 to 2024 :";
 cin>> year ;

 for ( int i =year ; i<2024 ; i++)
 {
     if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0))
     {
         cout<< " year " << i << " is a leap year " <<endl ;
     }
 }






    getch ();
}
