#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{

int num1 , num2 ;
cout<< " please enter two integer numbers " ;
cin >> num1 >> num2 ;
 cout<< endl <<endl;


if (num1%2==0 ){
    cout<< num1 << "  is a even number " <<endl;
  }
     else
        cout<< num1 << " is a odd number " ;
        cout<< endl <<endl;

if (num2%2==0 ){
    cout<< num2 << "  is a even number " <<endl;
  }
     else
        cout<< num2 << " is a odd number " ;
         cout<< endl <<endl;


 if (num1>num2){
    cout<< num1 << "  is the maximum number  "  <<endl;
 }
  else
    cout<< num2 <<"   is the maximum number  " ;



    getch () ;
}
