#include<iostream>
using namespace std ;
int main ()
{
    int num[15], sum=0 ;

    float avg ;



    cout<< " enter number of 15 students :" <<endl ;
    for (int i= 0 ; i <15 ; i++)
    {
        cout<< " marks for student " << i+1 <<":" ;
        cin>> num [i];
        cout <<endl;

    }

    for (int j= 0 ; j <15 ; j++)
    {



        if ( num[j]>=0 && num[j]<=100 )
        {
            sum = sum + num[j] ;
        }

        else
        {
            cout<< "student " <<j+1 << " enter a valid mark" <<endl ;
        }


    }




    cout<< " total  marks of 15 students is " << sum  <<endl ;
    avg = sum/15;

    cout << " average marks is " << avg <<endl ;

    int lowest= num[0];
    for (int j= 1 ; j <15 ; j++)
    {
        if (num[j] < lowest)
        {
            lowest = num[j];
        }
    }
    cout<< " the worst marks is " << lowest <<endl;

    if (sum >=1500 )
    {
        cout<< " the best section ";
    }
    else
    {
        cout<< " the average section " ;
    }













    return 0 ;
}
