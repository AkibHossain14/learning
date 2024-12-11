#include<iostream>
using namespace std ;
int main ()
{
    char name[20];
    int roll;
    float marks[5], sum = 0;
    cout<< " enter your first name :" ;
    cin>> name ;
    cout<< " enter your roll :"  ;
    cin>> roll ;


    for (int i= 0 ; i <5 ; i++)
    {
        cout<< " enter marks for subject " <<i+1 << ":"  ;
        cin>> marks [i];

        sum = sum+marks[i];
    }
    float percentage1 = (sum/500) *100;

    cout<< "studnt's name :" <<name <<endl;
    cout<< " roll :" <<roll <<endl;
    cout<< " total percentage :" <<percentage1<< "%" <<endl;







    return 0;
}
