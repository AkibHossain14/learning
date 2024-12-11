#include<iostream>
using namespace std ;

int main ()
{
    int num1 , num2 , mul =1 ;
    cout<< " enter two numbers :";
    cin>> num1 >> num2 ;

    // 2, 3 ;
    for (int i= 1 ; i <=num2 ; i++)
    {
        mul = mul*num1 ;
    }
    cout<< " the result is : "  <<mul ;





    return 0;
}
