
#include<iostream>
#include<conio.h>
using namespace std ;
int main ()
{

    int arr[15][15],a,sum=0;

    cout<< " enter the number of row and column in the matrix :" ;
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

    cout <<endl <<endl << " your matrix is :" <<endl ;

    for (int i =0 ; i <a ; i++)
    {
        for (int  j=0 ; j <a ; j++)
        {
            cout<< "\t" << arr[i] [j];

        }
        cout<<endl;
    }



    cout<<endl <<  " your transpose matrix is  :" <<endl;


    for (int i =0 ; i <a ; i++)
    {
        for (int  j=0 ; j <a ; j++)
        {
              cout<< "\t" << arr[j] [i];

        }
       cout<<endl;

    }

















    getch ();
}

