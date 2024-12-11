#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
   int first=0 , second =1 , counT = 0 , fibo , n ;
   cout<< " enter your limit :" ;
   cin >> n ;
   while ( counT<n )
   {
       if (counT<=1)
       {
           fibo=counT;
       }
           else{
            fibo = first+second ;
            first =second ;
            second=fibo ;
           }
           cout<< "your fibonacci series is :" <<endl <<fibo ;
           counT++;

   }








    getch () ;
}
