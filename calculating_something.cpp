#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    // first i will calculate the area of a triangle , than convert a temperature
    int num1, num2  ;
    cout<< " please enter the length and weidth of the triangle " << endl;

    cin>> num1 >> num2 ;

   int mul =  (float)1/2* ( num1* num2) ;
   // type casted because , duita integer number er multiplication always integer number . 1/2 korle ase 0.5 jekhane interger number holo zero .
   //  ultimately zero er sathe jeitai multiplication kori na keno output zero trio asbe . tai ekta numnber ke typecast kore float kore neya holo


    cout<< " your area of the triangle is " << mul <<endl <<endl;

    cout<< " please enter your area's temperature in celcius" <<endl;
    float celci , farenheit ;
    cin>> celci;
    farenheit = celci + 32 ;

    cout << " your area's converted temperature in farenheit is " <<farenheit ;




    getch ();
}
