#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   char ch;
   cout<< " please enter any character " <<endl ;
   cin>> ch;
   ch= tolower (ch);

   if ( ch =='a' || ch=='e' || ch=='i' || ch=='o' || ch== 'u'){
    cout<< " it's a viowel";
   }
   else cout<< " it's a consonant";






    getch ();
}
