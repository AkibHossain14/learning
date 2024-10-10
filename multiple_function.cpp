#include<iostream>
#include<conio.h>
using namespace std;

void multiplication (double,double);
void addition (int,int );
void division (int ,int);




int main()
{
multiplication (10,50);
addition (55,66);
division (5555555,69);




   getch();
}
void multiplication (double  a , double  b){
 double mul = a*b;
cout<< mul <<endl;}

void addition (int a, int b){
int sum = a+b;
cout<< sum <<endl;
}

void division (int a , int b ){
float div= (float)a/b;
cout<< div <<endl;
}
