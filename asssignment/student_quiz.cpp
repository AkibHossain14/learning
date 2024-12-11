#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"number of students : ";
    cin>>n;
    float quiz1[n],quiz2[n];
    cout<<"Quiz one marks : ";
    for(int i=0; i<n; i++)
    {
        cin>>quiz1[i];

    }
    cout<<"Quiz 2nd marks : ";
    for(int j=0; j<n; j++)
    {
        cin>>quiz2[j];

    }
    cout<<"Worst quizes : ";
    for(int k=0; k<n; k++)
    {
        if(quiz1[k]<quiz2[k])
        {
            cout<<quiz1[k]<< " ";
        }

        else
        {
            cout<<quiz2[k] << " ";
        }


    }
    getch ();
}
