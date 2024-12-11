#include<iostream>
using namespace std;
int main ()
{
    int n ;
    cout<< " how many numbers do you want :";
    cin>>n;
       int num [n];
    cout<< " enter your numbers ";

    for (int i =0 ; i<n ; i++)
    {
        cin>> num [i];
    }

    int largest= num[0] ;
    int secondLargest = -1 ;

    for (int i =1 ; i<n ; i++)
    {
        if (num[i]>largest)
        {
            secondLargest=largest;
            largest = num[i];
        }
        else if(largest >num[i] && secondLargest <num [i])
        {
            secondLargest = num [i];
        }

    }
    cout<< " your largest number is " << largest <<endl;
    if (secondLargest ==-1)
    {
        cout<< " there is no second largest";
    }
    else
    {
        cout<< " the second largest number is " << secondLargest;

    }

}
