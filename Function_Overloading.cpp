#include<iostream>
#include<conio.h>
using namespace std;

void add (int , int);
void add (int, int, int);

int main ()
{

  add(10,20);
cout  <<endl;
  add(20,30,888);





    getch();
}
void add (int a,int b) {
int sum= a+b;
cout<< "your total sum is " <<sum;
}
void add (int a, int b , int c ){

int sum = a+b+c ;
cout<< "your total sum is  " <<sum;
}
