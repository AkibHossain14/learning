#include<iostream>
using namespace std ;
int main ()
{
    int num1 , num2, temp ;

    cout<< " enter two numbers :" ;
    cin>> num1 >> num2 ;


    cout<< " your first number before swapping is :" <<num1 <<endl ;
    cout<< " your second number before swapping is :" <<num2 <<endl ;


    temp = num1;
    num1 = num2 ;
    num2 = temp ;

        cout<< " your first number after swapping is :" <<num1 <<endl ;
        cout<< " your second number after swapping is :" <<num2 <<endl ;










    return 0;
}
