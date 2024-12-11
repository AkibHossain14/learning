#include<iostream>
using namespace std ;
int main ()
{
    int n ;
    cout<< " enter a number :" ;
    cin>> n ;
    int prime[n];
    for (int i = 0; i < n; i++)
    {
        cin>> prime[i];
    }

    for (int i = 0; i < n; i++)
    {
        int num= prime[i];
        bool isPrime = true ;
        if (num <2 )
        {
            isPrime = false ;
        }
        else
        {
            for (int j = 2 ; j <num ; j++)
            {
                if (num % j==0 )
                {
                    isPrime = false ;
                    break;
                }
            }
        }

        if (isPrime)
        {
            cout<< num << " is a prime number " <<endl;
        }
        else
            cout<< num << " is not a prime number " <<endl;

    }
}

