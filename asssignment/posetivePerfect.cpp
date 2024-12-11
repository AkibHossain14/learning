#include<iostream>
#include<conio.h>
using  namespace std ;
int main ()
{
   int num , sum , start=0 ;
   cout<< " enter any positive integer number  " <<endl;
   cin>>num ;

   cout<< " perfect numbers from 1 to " << num << " are " <<endl;


   for ( int i =1 ; i<=num ; i++)
   {
       sum = 0 ;
       for ( int j =1 ; j<i ; j++)
       {
           if (i%j== 0 )
           {
               sum = sum +j ;
           }
       }
       if (i==sum)
       {
           cout<< i << " is a perfect number " <<endl;
           start++;
       }
   }

   cout<< " total count of perfect number  is " << start << endl;









    getch ();
}
