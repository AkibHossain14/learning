#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std ;
int main ()
{
    char str1[30];
    char str2[30];

    cout<< " enter the elements of string 1 :" ;
    cin.getline(str1,30);

    cout<< " enter the elements of string 2 :" ;
    cin.getline(str2,30);



  int result =  strcmp(str1,str2);

    if (result==0)
    {
        cout<< " same ";
    }
    else
    {
        cout<< " not same " ;
    }









    getch ();
}



