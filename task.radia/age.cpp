#include<iostream>
using namespace std ;

int main ()
{
    int x,y,z,highest, lowest;
    cout<< " enter X's age " ;
    cin>>x;
    cout<< " enter Y's age " ;
    cin>>y ;
    cout<< " enter Z's age " ;
    cin>> z;

    if ( x>y && x>z)
    {
        highest = x;
         cout<< " the oldest person is X" <<endl;
    }
   else  if ( y>z && y>x )
   {
       highest = y;
        cout<< " the oldest person is Y "<<endl;
   }
   else
   {
       highest = z;
        cout<< " the oldest person is z" <<endl;
   }

   if (y <x && y<z)
   {
       lowest= y;
   }
   else if (x<y && x <z)
   {
       lowest = x;
   }
   else
   {
       lowest = z ;
   }

   if (highest -lowest >10)
   {
       cout<< " the  age gap between highest and lowest is more than 10 years ";
   }
   else
   {
       cout<< " the  age gap between highest and lowest is  not more than 10 years ";
   }








    return 0;
}

