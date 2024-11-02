#include<iostream>
#include<conio.h>
#include <stdio.h>
using namespace std;

void display (int id , double gpa){

   cout<< " *your id is 24-" <<id << "-2" <<endl;
   cout<<" and your gpa is " <<gpa ;
}
void display (int id , double gpa , int roll){

   cout<< " *your id is 24-" <<id << "-2" <<endl;
   cout<<" and your gpa is " <<gpa <<endl;
   cout<< " and your roll is " << roll;
}

 void passingarray (int num[], int arraySize){

 for (int i=0; i<arraySize; i++){
    cout<< num[i];
 }
}

 int main()

 {
     // random number ;
     int n;
cout<< " how many numbers do you want ";
cin>> n;

       for( int i=0; i<n ; i++){

          double randomNumber = rand()%1000;
          cout<< i+1 <<". random number is " << randomNumber <<endl;
       }
       cout<< endl <<endl <<endl;


      display(58443,3.83);
      cout<< endl <<endl;

      display (58444,4.00,11);


      int num[6]={1,2,3,4,5,6};
      passingarray(num, 6);




     getch();
 }
