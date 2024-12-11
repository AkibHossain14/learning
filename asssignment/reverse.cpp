#include<iostream>
#include<conio.h>
using  namespace std ;
int main ()
{

   int num , num2 , revNum=0;
   cout<< " please enter a integer number :" ;
   cin >> num ;

 while ( num>0)
 {
   num2 = num%10 ;
   if (num2%2!= 0)
   {

       revNum = revNum*10 + num2;
   }
   num= num/10;
 }
 cout<< revNum;

    // 2345
    //5432





    getch () ;
}
