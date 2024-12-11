#include<iostream>
using namespace std ;

int main ()
{
    int num , mul=1;
     cout<< " enter a number you want to see factorial :";
     cin>> num ;
      for (int i= 1 ; i <=num ; i++)
      {
          mul = mul*i;
      }
      cout<< " the factorial of number  " <<num << " is :" <<mul ;









    return 0 ;
}
