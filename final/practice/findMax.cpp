#include<iostream>
using namespace std ;

void entry (int arr [], int n )
{
    for (int i =0 ; i<n ; i++ )
    {
        cin>> arr[i];
    }
}

int max ( int arr [], int n)
{
    int maxValue= arr[0];
    for (int i =1 ; i<n ; i++ )
    {
        if ( maxValue< arr[i])

        {
            maxValue = arr[i];
        }


    }
    return maxValue;
}



int main ()
{
    int n  ;
    cout<< " please enter the size of the array :" ;
    cin>> n;

    int arr [n] ;
    cout<< "| please input " << n << " numbers to the array " ;

    entry (arr, n) ;

    int maximum = max ( arr , n);

    cout<< " the maximum value is " << maximum ;





        return 0 ;
}
