#include<iostream>
using namespace std;
int main()
{
  int num, sum=0;
  cout<< " write an integer number "  ;
  cin>>num ;
  for (int i=0 ; i<=num ; i++)
  {
      sum = sum + i;

  }
    cout<< "your total sum is " << sum;



}
