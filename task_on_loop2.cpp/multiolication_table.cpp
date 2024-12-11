#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int num ,mul;
   cout<< " enter the number you want to see multiplication table :"  ;
   cin >> num ;
   for ( int i=1 ; i<11; i++)
    {
      mul=i*num ;
      cout<< num << " X"  << i << "=" <<mul <<endl;
    }







    getch ();
}
