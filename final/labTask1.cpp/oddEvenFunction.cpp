#include<iostream>
using namespace std ;
void entry (int n , int num[] );
void oddEven ( int n , int num []);

int main ()
{
  int n ;
  cout << " how many numbers you want to take : " ;
  cin>> n ;
  int num[n] ;

  cout<< " enter " <<n << " inter numbers :" ;

    entry (n , num );

    cout<< " here is the test of odd or even numbers " <<endl  ;

    oddEven (n , num );




    return 0 ;
}
void entry (int n , int num[] )
{
    for ( int i =0 ; i <n ; i++)
    {
        cin>> num[i] ;
    }

}
void oddEven ( int n , int num [])
{
    for ( int i = 0 ; i<n ; i++)
    {
        if (num[i]%2== 0 )
        {
            cout<< num[i] << " is a even  number " <<endl ;
        }
        else
        {
         cout<< num[i] << " is a odd number " <<endl ;
        }
    }
}
