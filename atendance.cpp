#include<iostream>
#include<conio.h>
using namespace std;

int main ()
{
    int classheld,attend ;
    cout<< " how much days your class was held : "   ;
    cin >> classheld ;
    cout<< " how much days you attend class : " ;
    cin>> attend ;

    float present = ((float) attend/classheld ) *100 ;

    cout << " your attendence is " <<present <<endl;

    if ( present >=95 && present <100)
    {
        cout<< "you're allowed to sit in the exam ";
    }
    else
    {
        cout<< " you're not allowed to sit in the exam ";
    }






getch ();

}
