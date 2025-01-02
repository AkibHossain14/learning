#include <iostream>
using namespace std;
void noksa (int n );
int main ()
{
    int n ;

    cout<< " enter number of rows :" ;
    cin >> n ;

    cout<< " the pattern is " <<endl ;

    noksa (n );





    return 0 ;
}

void noksa (int n )
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout<<"*" <<" " ;
        }
        cout<< endl ;
    }
}

