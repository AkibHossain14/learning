#include<iostream>
using namespace std ;
int main ()
{
    int year [8] ;
    cout<< " enter the birth year of 8 historical places" ;

     for (int i=0 ; i<8;i++)
     {

         cin >> year[i] ;
     }
cout<< " years are not leap year in the array are :" ;
      for (int i=0 ; i<8;i++)
      {
          if (year[i]>1000 && year[i]<2024 )
          {
              if  ((year[i] % 4 == 0 && year[i] % 100 != 0) || (year[i] % 400 == 0))
              {
                  continue ;

              }

              else
              {
                  cout<< year [i] << ",";
              }
          }
      }






}
