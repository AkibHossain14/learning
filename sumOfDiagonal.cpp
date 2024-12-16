#include<iostream>
using namespace std ;
int main ()
{

    int arr[15][15],a,sum=0;

    cout<< " enter the number of riw and column in the matrix :" ;
    cin >>a ;

    arr[a] [a];

    cout<< " enter the elements of the matrix :" <<endl ;
    for (int i =0 ; i <a ; i++)
    {
        for (int  j=0 ; j <a ; j++)
        {
            cout<< " Array [" <<i <<"] [" <<j <<"] :" ;
            cin >>arr[i] [j] ;

        }
    }

    cout << " your matrix is :" <<endl ;

     for (int i =0 ; i <a ; i++)
    {
        for (int  j=0 ; j <a ; j++)
        {
           cout<< "\t" << arr[i] [j];

        }
        cout<<endl;
    }



    cout<< endl <<endl << " diagonal elements are : " ;


     for (int i =0 ; i <a ; i++)
    {
        for (int  j=0 ; j <a ; j++)
        {
           if (i== j)
           {
               cout<< arr[i] [j] << " ";
               sum = sum + arr[i] [j] ;
           }

        }

    }



    cout<<endl <<endl << " sum of diagonal elements are :"  << sum ;












    return 0;
}
