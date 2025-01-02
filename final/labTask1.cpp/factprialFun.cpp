#include<iostream>
using namespace std ;
int fact (int n );

int main ()
{
   int n ;
   cout<< " enter a number :" ;
   cin>>n ;
    int result ;
    result =fact (n) ;
    cout<< " the factorial of number " <<n << " is " <<result ;

    return 0 ;
}
int fact (int n )
{
    int mul=1;
for (int i=1; i<=n;  i++)
 {
    mul = mul*i;
 }
 return mul ;
}
