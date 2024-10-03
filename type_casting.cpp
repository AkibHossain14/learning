#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int num1 ,num2;
    cout<< " please enter two numbers" <<endl;
    cin>> num1  >>num2;
    int sum ;
    sum= num1+num2;
    cout << " your total sum is " << sum <<endl;
     float  div = (float) num1/num2 ;
     // i did type casting here
     // because two integer numbers division is always a integer number
     // if i need floating number than i have to do type casting like  i did in  the previous number


     cout<< " your total division is " << div;









    getch( );
}
