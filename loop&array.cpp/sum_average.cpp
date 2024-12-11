#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
  int num[5], sum=0;

  cout<< " enter five integer numbers :" ;
  for (int i=0 ; i <5 ; i++)
  {
      cin >> num [i];
  }


  for (int i =0 ; i <5 ; i++)
  {
      sum = sum + num [i];

  }
  cout<< " total sum is :" << sum  <<endl;
  float avg= (float )sum / 5 ;








    getch () ;
}
