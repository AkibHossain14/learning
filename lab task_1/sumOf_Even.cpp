#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int num1, num2,sum=0 ;
    cout<< " enter two integer numbers :" <<endl;
    cout<< " your first number is :";
    cin>>num1;
    cout<< " your second number is :";
    cin>>num2 ;


    for (int i=num1 ; i<=num2; i++)
    {
        if (i%2 == 0)
        {
         sum = sum+ i ;
        }
    }
    cout<< " your total sum of even numbers is :" <<sum ;

 // 4,6,8,10;



    getch ();
}
