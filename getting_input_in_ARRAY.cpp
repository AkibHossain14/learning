#include<iostream>
#include<conio.h>
using namespace std;
 int main()
 {
    cout<< " enter the marks of the students whose roll in 1 to 10 " <<endl;
   int marks[10];

   for (int i=0; i<10;i++ ){

    cin>> marks[i];
   }

   cout<< "to see your entered marks please press ENTER" <<endl;

   for (int i=0; i<10; i++){
    cout<< " Roll no " << i+1 << " marks is = " <<marks[i];
    cout<<endl;
   }











     getch();
 }

