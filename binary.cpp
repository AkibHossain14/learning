#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
   int n,bin[32] , i=0;
   cout<< " enter any decimal number :" ;
   cin>> n ;


   while (n>0)
   {
       bin[i]=n%2;
       n=n/2;
       i++;
   }

   for (int j=i-1; j>=0; j--)
   {
       cout<< bin[j];
   }


// index 0,1,2,3,4




    getch ();
}
