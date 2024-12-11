#include<iostream>
using namespace std ;
int main ()
{
    int n ;
    cout<< " enter how many numbers you want to take :";
    cin>> n ;
    int num[n];
    cout<< "enter " <<n << "numbers " ;
     for (int i =0 ; i<n ; i++)
    {
        cin>> num [i];
    }

     for (int i =0 ; i<n ; i++)
    {
        if ( num[i] %2==0  )
        {
            cout<< num[i] << " is a even number "<<endl;
        }
        else
        {
            cout<< num[i] << " is a odd number " <<endl;
        }
    }

}
