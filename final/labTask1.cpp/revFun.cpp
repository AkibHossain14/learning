#include<iostream>
using namespace std ;
void entry (int lim, int num[] );
void result (int n , int num []);
void rev (int lim, int number[]);

int main ()
{
    int n ;
    cout<< " how many numbers do you want :" ;
    cin >> n ;
    int num[n] ;


    cout<< " enter " << n << " numbers : " <<endl ;

    entry ( n, num);



    cout<< " your entered numbers are :" ;
    result (n , num) ;


    cout<<endl << " your numbers in a reverse order is : " ;



    rev (n, num  );





    return 0 ;
}



void entry (int lim, int num[] )
{
    for ( int i =0 ; i <lim ; i ++ )
    {
        cin>> num[i] ;

    }
}


void result (int n , int num []){
for ( int i =0 ; i <n ; i ++ )
    {
        cout<<  num[i] <<" " ;

    }
}

void rev (int lim, int number[])
{
    for ( int i=lim-1 ; i >=0 ; i-- )
    {
        cout <<number[i] << " " ;

    }

}
