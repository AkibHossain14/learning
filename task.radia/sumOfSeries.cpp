#include<iostream>
using namespace std ;

int main ()
{
    int n, sum1 =0 ; ;
    cout<< " enter the value of nTH term :";
    cin>> n ;
     for (int i= 1 ; i <=n ; i++)
     {
         int sum =0 ;
         sum = i+i ;
         sum1 = sum1 + sum ;
         cout<< i << "+"  <<i << " = " <<sum  <<endl;
     }
     cout<< " total sum of this series is : " <<sum1 ;



}
