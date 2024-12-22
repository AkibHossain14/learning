
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std ;
int main ()
{

   char str1[50];
   int viowel=0;

   cout<< " enter your string :";
   cin.getline(str1,50);
   int result = strlen(str1) ;

   for ( int i=0 ; i< result; i++)
   {
       if ( str1[i] == 'a' ||str1[i] == 'e' ||str1[i] == 'i' ||str1[i] == 'o' ||str1[i] == 'u' ||
           str1[i] == 'A' ||str1[i] == 'E' ||str1[i] == 'I' ||str1[i] == 'O' ||str1[i] == 'U' )
       {
           viowel++ ;
       }
   }

   cout<< " total viowel count is " << viowel << " times " ;










    getch ();
}
