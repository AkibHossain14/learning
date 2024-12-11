#include<iostream>
using namespace std ;
int main ()
{
    int num ,mul=1;
    cout << " enter a number :" ;
    cin >>num;


    for (int i =1 ; i<=num ;i++)
    {
         mul= mul*i;
    }
    cout<< " factorial of " << num << "is :" <<mul;
}
