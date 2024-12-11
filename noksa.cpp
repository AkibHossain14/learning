
#include<iostream>
#include<conio.h>
using namespace std;
 int main ()
  {
      int n ;
      cout<< " enter how many lines you want :" ;
      cin>>n ;

           for (int row = 1; row<=n ; row++)
           {
               for ( int col =1 ; col<=row; col++  )
               {
                   cout<< col  << " " ;
               }
               cout<< endl;
           }








  getch ();
  }
