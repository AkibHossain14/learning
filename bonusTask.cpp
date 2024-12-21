#include<iostream>
#include<conio.h>
using namespace std ;
int main ()
{
    int arr1[3] [3];
    int sumr1=0, sumr2=0, sumr3=0,sumC1=0, sumC2=0, sumC3=0 ;

    cout<< " enter the elements of the matrix :" <<endl ;

    for ( int i =0 ; i < 3 ; i++)
    {
        for ( int j =0 ; j <3; j++)
        {
            cout<< "Array [" <<i <<"] [" <<j << "] :" ;
            cin>> arr1[i] [j];
        }
    }

    cout<< endl <<endl << " matrix is  :" <<endl;
    for ( int i =0 ; i < 3 ; i++)
    {
        for ( int j =0 ; j <3; j++)
        {
            cout <<"\t" << arr1[i] [j];
        }
        cout<<endl;
    }

    cout<< " sum of the first row : " ;
    for ( int i =0 ; i < 3 ; i++)
    {
        sumr1= sumr1+arr1[0][i];
    }
    cout <<sumr1 <<endl;

    cout<< " sum of the second row : " ;
    for ( int i =0 ; i < 3 ; i++)
    {
        sumr2= sumr2+arr1[1][i];
    }
    cout <<sumr2 <<endl;

    cout<< " sum of the third row : " ;
    for ( int i =0 ; i < 3 ; i++)
    {
        sumr3= sumr3+arr1[2][i];
    }
    cout <<sumr3 <<endl;

    cout<< " sum of the first column : " ;
    for ( int i =0 ; i < 3 ; i++)
    {
        sumC1= sumC1+arr1[i][0];
    }
    cout <<sumC1 <<endl;

    cout<< " sum of the second column : " ;
    for ( int i =0 ; i < 3 ; i++)
    {
        sumC2= sumC2+arr1[i][1];
    }
    cout <<sumC2 <<endl;
    cout<< " sum of the third column : " ;
    for ( int i =0 ; i < 3 ; i++)
    {
        sumC3= sumC3+arr1[i][2];
    }
    cout <<sumC3 <<endl;







    getch () ;


}
