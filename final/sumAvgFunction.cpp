#include<iostream>
using namespace std ;
void entry ( int n , int num[]);
int totalSum (int n , int num[]) ;
double average (float sum , int n ) ;
int main ()
{
    int n ;
 cout<< " how many students marks do you want :" ;
 cin >> n ;

 int num[n] ;

 cout<< " enter " <<n << " students marks " <<endl ;
 entry (n , num) ;
 cout<< endl << " total marks of " <<n << " students are :" ;
 int result ;
 result = totalSum (n , num);
cout<< result ;


cout<<endl << " average marks of the students is :" ;
double avg ;
avg = average ( result, n );
cout<< avg ;






    return 0;
}

void entry ( int n , int num[])
{
    for ( int i =0 ; i <n ; i++)
    {
        cin>>num[i] ;
    }
}

int totalSum (int n , int num[])
{
    int sum=0;
    for (int i =0 ;i<n ; i++ )
    {
       sum = sum + num[i] ;
    }
    return sum ;
}

double average (float sum , int n )
{
   double avg = sum/n ;

    return avg ;
}
