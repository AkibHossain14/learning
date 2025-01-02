#include<iostream>
using namespace std ;
void point (int a, int b);



int main ()
{

    int value1   ,value2 ;

    cin>>value1 >>value2 ;

   point (value1 , value2 ) ;






}


void point (int a, int b){
int Swap=a;
a=b;
b=Swap ;
cout<< a << "  " <<b ;
}
