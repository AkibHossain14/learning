#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int num1 , num2 ;
    cout<< " enter your first number :" ;
    cin>> num1 ;
    cout<< "enter your second number :";
    cin >> num2 ;

     while (num2 !=0 )
    {
        int left = num1%num2 ;
        num1 =num2 ;
        num2 =left  ;
    }
    cout<< " GCD is :" << num1 ;
    getch () ;


}
