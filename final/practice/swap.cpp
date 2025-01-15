#include<iostream>
using namespace std ;

void  swap (int *a, int *b)
{
    int s;
    s= *a;
    *a = *b;
    *b = s;
}



int main()
{
    int a=10, b=20;

    swap (&a,&b);

    cout<< a <<"  " << b;





    return 0 ;
}
