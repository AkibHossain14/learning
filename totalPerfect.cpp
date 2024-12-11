#include<iostream>
using namespace std ;
int main ()
{

    int num[3];
    cout<< "please enter three integer numbers :" ;

    for (int i=0 ; i<3; i++)

    {
        int sum =0 ;
        cin >> num[i];

         for (int j=1 ; j<num[i]; j++)
         {
             if (num[i]%j==0 )
                sum = sum + j ;
         }

         if (num[i] == sum )
         {
             cout<< num[i] << " is a perfect number " <<endl;
         }
         else
         {
             cout<< num[i]  << " is not a perfect number "<<endl;

         }

    }





}
