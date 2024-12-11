#include<iostream>
using namespace std ;

int main ()
{
  float tem[5], hum [5] , sumTem=0 , sumHum =0;
   for (int i= 0 ; i <5 ; i++)
   {
       cout<< " Enter the temperature (in celsius ) for day "  <<i+1 << ":" ;
       cin>>tem[i];
       cout<< "Enter the humidity (in percentage ) for day " <<i+1 << ":";
       cin >> hum[i];
       sumTem =sumTem + tem[i];
       sumHum =sumHum + tem[i];
   }

   cout<< "Average temperature over 5 days is : " <<sumTem/5 <<endl ;
   cout<< "Average  over 5 days is : " <<(sumHum/5) << "%" <<endl ;







    return 0 ;
}
