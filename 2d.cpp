#include<iostream>
using namespace std;
int main()
{
    int r,c;

    cout<<"Enter the number of row :"<<endl;
    cin>>r;
    cout<<"Enter the number of column :"<<endl;
    cin>>c;
    int arr[r][c];
    cout<<"Enter elements :"<<endl;
    for (int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<arr[i][j]<< " ";
        }
        cout<<endl;
    }
    return 0;
}
