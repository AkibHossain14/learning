#include<iostream>
using namespace std ;
void entry (int n , int num[] );
void Return (int n ,int num []);
int main ()
{
    int n ;
    cout<< " how many numbers do you want :" ;
    cin>>n ;
    int num[n] ;


    cout<< " enter " << n << "numbers" <<endl;
    entry (n , num);
    Return(n, num);









 return 0 ;
}
void entry (int n , int num[] )
{
    for ( int i =0 ; i <n ; i++)
    {
        cin>> num[i] ;
    }

}

void Return (int n ,int num [])
{
    int largest = num[0] ;
    int secondLargest= -1;

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

       cout<< " largest number is :" <<largest <<endl ;

       if (secondLargest == -1  )
       {
            cout<<endl << " there is no second largest number " ;
       }
       else
        cout<< endl << " second largest number is :" <<secondLargest ;

}
