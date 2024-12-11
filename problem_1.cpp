#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    float totalKmPerday , costPerLitre , avgKmperlitre , parkingFees, tolls ;
     cout<< " how much do you drive in a day ?" <<endl ;
      cin>> totalKmPerday ;
     cout<< " what is the cost per litre of petrol ?" <<endl;
      cin>> costPerLitre ;
      cout<< " what is average millage of your car ?" <<endl;
       cin>>avgKmperlitre ;
       cout<<  " how do you spent after parking your car ?" <<endl;
       cin >> parkingFees ;
        cout<< " how much do you spent on tolls .?" <<endl;
        cin>> tolls ;


        float cost= (totalKmPerday /avgKmperlitre ) * costPerLitre ;
        float totalCost = cost + parkingFees +tolls ;

        cout<< " your total cost per day is " << totalCost << " taka" ;







getch () ;

}
