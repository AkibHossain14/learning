#include<iostream>
#include<conio.h>
using namespace std;

void passingarray (int num[] , int arraysize){

  for (int i=0; i<arraysize ;i++){
    cout<< num[i] << " " ;
  }
}


int main ()

{

    int num [6]= {1,2,3,4,5,6};
    passingarray (num , 6);


    int number  [2]= {66,45};
    cout<< endl;
    passingarray (num , 2);







    getch();
}
