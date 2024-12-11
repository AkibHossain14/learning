#include <iostream>
#include <conio.h>

using namespace std;
int main ()
{
 int n , row, col ;

 cout<< " enter number of rows :" ;
 cin >> n ;

 for (int row = 1; row <= n; row++)
 {
     for (int col = 1; col <= row; col++)
     {
         cout<< col <<" " ;
     }
     cout<< endl ;
 }







    getch ();
}
