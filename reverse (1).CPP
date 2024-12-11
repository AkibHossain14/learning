#include<iostream>
using namespace std ;
int main ()
{
    int n ;
    cout<< " how many numbers you want to take :" ;
    cin >> n ;
    int num [n];
    cout<< " enter your numbers :";
    for (int i =0 ; i<n ; i++)
    {
        cin>> num [i];
    }

    cout<< " your numbers are :" <<endl ;
     for (int i =0 ; i<n ; i++)
    {
        cout<< num [i] <<" ";
    }
    cout<< endl <<endl;

    cout << " your numbers in reverse order is:" ;

     for (int i =n-1 ; i>=0 ; i--)
    {
        cout<< num [i] <<" ";
    }
}
