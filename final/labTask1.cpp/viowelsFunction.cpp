#include<iostream>
using namespace std ;
void entry (int n , char num[] );
void vowel ( int n , char num []) ;

int main ()
{
    int n ;
    cout<< " how many characters do you want " ;
    cin>> n ;
    char chara[n] ;

    cout<< " enter " <<n << " characters :" ;
    entry (n , chara);


    cout<< endl  ;

    vowel (n,chara);




    return 0 ;
}
void entry (int n , char num[] )
{
    for ( int i =0 ; i <n ; i++)
    {
        cin>> num[i] ;
    }

}

void vowel ( int n , char num [])
{
    for ( int i = 0 ; i<n ; i++)
    {

        if (num[i]== 'a' ||num[i]== 'e' ||num[i]== 'i' ||num[i]== 'o' ||num[i]== 'u' ||
            num[i]== 'A' ||num[i]== 'E' ||num[i]== 'I' ||num[i]== 'O' ||num[i]== 'U' )
        {
            cout<< num[i] << " is a vowel " <<endl ;
        }

    }
}
