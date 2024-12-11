#include<iostream>
#include<conio.h>
using namespace std ;
 int main ()
 {
    int num ,bin[32] , i =0  ;
    cout<< "enter any decimal number :" ;
    cin>> num ;

    for ( ; num>0 ; i++)
    {
        bin[i]=num%2 ;
       num= num/2;
    }
    cout<< " your binary number is :" ;
    for ( int j=i-1 ; j>=0; j-- )
    {
        cout<< bin[j];
    }



     getch ();
 }
