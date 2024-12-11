#include<iostream>
#include<conio.h>
using namespace std ;
int main()
{
   int number[5] ;
   cout<< " enter five integer numbers " ;
   for (int i=0 ; i<5; i++)
   {
       cin>> number [i];
   }

   cout<< " your entered numbers are :" <<endl;
   for (int j=0 ; j<5; j++)
   {
       cout<< number [j] <<endl;
   }
cout << " your numbers in a reverse way :" <<endl ;
  for (int k=4 ; k>=0; k--)
  {
      cout<< number [k] << "  ";
  }






    getch ();
}
