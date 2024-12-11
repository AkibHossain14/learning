#include<iostream>
#include<conio.h>
using namespace std ;
int main ()
{
   int num, sum=0 ;
   cout<< " enter your limit :" ;
   cin>> num ;

   if (num>0) {
   for (int i=1; i<=num; i++)
   {
       sum=sum+i ;
   }
    cout<< " your total sum is :" <<sum ;
   }
  else
    cout<< " invalid number  " ;



    getch();
}
