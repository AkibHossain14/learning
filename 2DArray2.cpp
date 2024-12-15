#include<iostream>
using namespace std ;
int main ()
{
  int arr1[3] [4];
  int arr2[3] [4], arr3[3] [4], arr4[3][4] ;
  cout<< " enter elements for array 1 :"  <<endl;

  for ( int i =0 ; i < 3 ; i++)
  {
      for ( int j =0 ; j <4; j++)
      {
          cout<< "Array [" <<i <<"] [" <<j << "] :" ;
          cin>> arr1[i] [j];
      }
  }


  cout<< " enter elements for array 2 :" <<endl ;

  for ( int i =0 ; i < 3 ; i++)
  {
      for ( int j =0 ; j <4; j++)
      {
          cout<< "Array [" <<i <<"] [" <<j << "] :" ;
          cin>> arr2[i] [j];
      }
  }




   cout<< endl <<endl << " Array 1 is :" <<endl;
   for ( int i =0 ; i < 3 ; i++)
  {
      for ( int j =0 ; j <4; j++)
      {
         cout <<"\t" << arr1[i] [j];
      }
      cout<<endl;
  }

cout<< endl <<endl << " Array 2 is :" <<endl;
   for ( int i =0 ; i < 3 ; i++)
  {
      for ( int j =0 ; j <4; j++)
      {
         cout<<"\t"<< arr2[i] [j];
      }
      cout<<endl;
  }



cout<< endl <<endl << " sum of matrix 1 and 2 is :" <<endl;
   for ( int i =0 ; i < 3 ; i++)
  {
      for ( int j =0 ; j <4; j++)
      {
        arr3[i] [j] = arr1[i] [j] + arr2[i] [j] ;
         cout<<"\t" << arr3[i][j];
      }
      cout<<endl;
  }


cout<< endl <<endl << " sub of matrix 1 and 2 is :" <<endl;
   for ( int i =0 ; i < 3 ; i++)
  {
      for ( int j =0 ; j <4; j++)
      {
      arr4[i] [j] = arr1[i] [j] -arr2[i] [j] ;
         cout<<"\t" << arr4[i][j];
      }
      cout<<endl;
  }



    return 0;
}
