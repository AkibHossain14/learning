#include<iostream>
using namespace std ;
int main ()
{
    int n ;
    cout<< " how many numbers do you want :" ;
    cin>>n ;
    int num[n] ;

    cout<< " enter " <<n << " numbers " ;
     for ( int i =0 ; i <n ; i++)
    {
        cin>> num[i] ;
    }

    int largest=num[0];
    int secondLargest = -1 ;

       for ( int i =1; i <n ; i++)
       {
           if ( num[i]>largest )
           {
               secondLargest = largest ;
               largest = num[i] ;
           }
           else if (num[i] > secondLargest && largest > num[i])
           {
               secondLargest = num[i] ;
           }
       }


       cout<< " largest number is : " << largest ;


       if (secondLargest == -1  )
       {
            cout<<endl << " there is no second largest number " ;
       }
       else
        cout<< endl << " second largest number is :" <<secondLargest ;


    return 0 ;
}
