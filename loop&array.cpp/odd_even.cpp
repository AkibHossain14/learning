#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
   int n  ;
   cout << " how many numbers you want to take as input :";
   cin>> n ;
   int  arr[n];

   cout<< " enter " <<n << " integer numbers :";

   for (int i=0 ; i <n ; i++)
   {
       cin >> arr[i];
   }

   for (int i=0 ; i <n ; i++)
   {
       if (arr[i]%2 ==0)
       {
           cout<< arr[i] << "is a even number " <<endl;
       }
       else
       {
           cout<< arr[i] << " is a odd number "<<endl;
       }
   }







    getch ;
}
