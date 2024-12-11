#include<iostream>
using namespace std ;

int main ()
{
    int x,y,z,highest, lowest;
    cout<< " enter X's sallary " ;
    cin>>x;
    cout<< " enter Y's sallary " ;
    cin>>y ;
    cout<< " enter Z's sallary " ;
    cin>> z;

    if ( x>y && x>z)
    {
        highest = x;
         cout<< " the highest paid  person is X" <<endl;
    }
   else  if ( y>z && y>x )
   {
       highest = y;
        cout<<  " the highest paid  person is Y"<<endl;
   }
   else
   {
       highest = z;
        cout<<  " the highest paid  person is Z" <<endl;
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

   if (highest -lowest >2000)
   {
       cout<< " the  difference between highest and lowest salary is  more than 2000 ";
   }
   else
   {
       cout<< " the  difference between highest and lowest salary is not  more than 2000 ";
   }








    return 0;
}

