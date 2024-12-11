#include<iostream>
#include<conio.h>
using  namespace std ;
int main ()
{
    int num, num2 , sum  ;
    cout<< " enter a positive integer number " ;
    cin >> num ;

    while (num>0 )
    {
        num2 = num%10 ;
        sum=0;

         for (int i =1 ; i <num2 ; i++)
         {
             if (num2 %i==0)
             {
                 sum = sum+i;
             }


         }
         if (sum==num2 )
         {
             cout<< num2;
         }

         num = num/10;
    }







    getch ();
}
