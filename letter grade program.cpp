#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  float mark;
  cout<< " please enter your mark in math" <<endl;
  cin>> mark;
  if (100<mark ) {
    cout<< " invalid";
  }
  else if (mark >=80) {
    cout<< " you got A+";
  }
   else if (mark >=70) {
    cout<< " you got A";
  }
   else if (mark >=60) {
    cout<< " you got A-";
  }

  else  if (mark >=50) {
    cout<< " you got B";
  }


  else  if (mark >=40) {
    cout<< " you got c";
  }
  else  if (mark >=33) {
    cout<< " you got D";
  }

else cout<< " you FAILED";







    getch();
}
