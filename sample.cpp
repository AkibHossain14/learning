#include<iostream>
using namespace std ;
int main()

{
    int n , i=0;
    cout<< " enter the limit ";
    cin>> n ;
    int num [n] ;
    cout<< " enter " << n << " inputs ";
    for (int i =0 ; i <n ; i++)
    {
        cin>> num [i];
    }
     for (int i =0 ; i <n ; i++)
     {
         if (num [i] % 3== 0 && num [i]% 5==0)
         {
         cout << "fizzBuzz" <<endl;
         }

     else if ( num [i] %3== 0)
     {
         cout<< "fizz" <<endl;
     }
     else if ( num [i] %5== 0)
     {
         cout<< "Buzz" <<endl;
     }
     else
     {
         cout<< num [i] <<endl;
     }

     }


  return 0 ;
}

