#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
   int n ;
   cout<< " how many characters do you want as  a input :"  ;
   cin>> n ;
   char arr[n];


   cout<< "enter " <<n << " charcaters :";

   for (int i=0 ; i <5 ; i++)
   {
       cin>> arr[i];
   }

    for (int i=0 ; i <5 ; i++)
    {
        if ( arr[i] =='a' || arr[i]=='e' || arr [i]=='i' || arr[i]=='o' || arr[i]== 'u')
            {
           cout<< arr[i] << "is a vowel" <<endl;
            }
    }



    getch ;
}
