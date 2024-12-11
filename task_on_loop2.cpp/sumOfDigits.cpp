#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int num , sum=0;
    cout<< " enter a digit :"  ;
    cin >> num ;

    while (num >0)
    {
        int digit = num%10 ;
        sum = sum+digit ;
        num = num/10 ;
    }
cout<< " your given digit's total sum is :" << sum ;


    getch ();
}
