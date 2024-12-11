#include <iostream>
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

      int largest= num [0] ;
      int secondLargest = -1 ;

      for ( int i =1 ; i <n ; i++)
      {
          if (num [i] > largest)
          {
              secondLargest = largest ;
              largest = num [i];
          }
      }

      cout<< " largest number is "<< largest <<endl;

      if ( secondLargest == -1)
      {
          cout<< " there is no second largest" ;
      }
      else
        cout<< " second largest number is " << secondLargest ;

}
