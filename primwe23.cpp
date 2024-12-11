#include<iostream>
using namespace std ;
int main ()
{
    int n ;
     cout<< "enter a number :";
     cin >> n ;
     int num [n];
     cout<< " enter " <<n << "numbers"  ;
      for ( int i =0 ; i <n ; i++)
      {
          cin >> num [i];
      }

      for ( int i =1 ; i <n ; i++)
      {
          number = num[i];
          bool isPrime = true;
          if ( numbber <2)
          {
              isPrime= false ;
          }
          else
          {
              for ( j= 2 ; j <number ; j++)
              {
                  if ( number % 2 == 0)
                  {
                      isPrime = false ;
                      break;
                  }

              }
          }

          if (isPrime)
          {
              cout<< number << " is a prime number ";
          }
          else
            cout<< num <<"  is not a prime number";

      }
}
