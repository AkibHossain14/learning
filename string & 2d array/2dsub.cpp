
#include<iostream>
#include<conio.h>
using namespace std ;
int main ()
{
  int num1, num2;

  cout<< " enter the numbers of row :"  ;
  cin>>num1 ;
  cout<< " enter the numbers of column :"  ;
  cin>>num2 ;
  int matrix1 [num1] [num2] ;
  int matrix2 [num1] [num2] ;

  cout<<endl << " enter the elements of the matrix :" ;

  for ( int i =0 ; i< num1 ; i++)
  {
      for ( int j= 0 ; j <num2 ; j++)
      {
          cout<< endl <<" index [" <<i << "][" <<j <<"] :" ;
          cin>>matrix1[i] [j] ;
      }
  }



  cout<<endl << " enter the elements of the second  matrix :" ;

  for ( int i =0 ; i< num1 ; i++)
  {
      for ( int j= 0 ; j <num2 ; j++)
      {
          cout<< endl <<" index [" <<i << "][" <<j <<"] :" ;
          cin>>matrix2[i] [j] ;
      }
  }


  cout<<endl <<endl;

  cout<< " first matrix is :" <<endl ;
   for ( int i =0 ; i< num1 ; i++)
  {
      for ( int j= 0 ; j <num2 ; j++)
      {
          cout<<"\t" <<matrix1[i] [j] ;

      }
      cout<<endl ;
  }


   cout<<endl <<endl;

  cout<< " second matrix is :" <<endl ;
   for ( int i =0 ; i< num1 ; i++)
  {
      for ( int j= 0 ; j <num2 ; j++)
      {
          cout<<"\t" <<matrix2[i] [j] ;

      }
      cout<<endl ;
  }
int result [num1] [num2] ;

 for ( int i =0 ; i< num1 ; i++)
  {
      for ( int j= 0 ; j <num2 ; j++)
      {
          result[i] [j] = matrix1 [i] [j] - matrix2[i][j];

      }
      cout<<endl ;
  }

  cout<<endl << " total sum of the two matrix is " <<endl ;
   for ( int i =0 ; i< num1 ; i++)
  {
      for ( int j= 0 ; j <num2 ; j++)
      {
          cout<<"\t" <<result [i] [j] ;

      }
      cout<<endl ;
  }











    getch ();
    }

