#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

float num1,num2,num3;
    cout<< " enter any three numbers" << endl;
    cin>> num1 >>num2 >>num3 ;

    if (num1>num2 && num1>num3){
        cout<< num1 << " is larger among the numbers ";
    }
    else if (num2>num1 && num2>num3){
        cout<< num2 << " is the larger among the numbers " ;
    }
    else cout<< num3 << " is the larger among the numbers ";






    getch();
}
