#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    // first i will calculate the area of a triangle , than convert a temperature
    int num1, num2  ;
    cout<< " please enter the length and weidth of the triangle " << endl;

    cin>> num1 >> num2 ;

    float mul =  1/2* ( num1* num2) ;

    cout<< " your area of the triangle is " << mul;

    getch ();
}
