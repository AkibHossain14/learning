#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
  int num, sum=0,store[20];
  cout<< " enter any number :" ;
  cin>>num;
  for (int i=0; i<num; i++)
  {
     store[i]=num %10 ;
     sum =sum + store[i] ;
     num = num/10;
  }
    cout<< "your total sum is :" <<sum;




    getch ();
}
