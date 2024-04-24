#include <iostream>
using namespace std ; 


int main(){

   int row, col ;

    cout << "enter row  " << endl;
    cin >> row ;

        cout << "enter col  " << endl;
    cin >> col ;


   int **arr = new int*[row] ; 

   for(int i =0 ; i < row ; i++){

       arr[i] = new int[col];

   }

   cout <<" enter array number " <<endl;

   for(int i =0 ; i < row ;i++){
      for(int j =0 ; j < col ; j++){
         cin >> arr[i][j];

      }

   }

      cout <<" print array number " <<endl;

   for(int i =0 ; i < row ;i++){
      for(int j =0 ; j < col ; j++){
         cout << arr[i][j]<<"  ";
         
      }
      cout << endl;
   }

    cout << "free memory" <<endl;

   for(int i =0 ; i < row ; i++){

       delete []arr[i] ;

   }

    delete []arr ;

   for(int i =0 ; i < row ;i++){
      for(int j =0 ; j < col ; j++){
         cout << arr[i][j]<<"  ";
         
      }
      cout << endl;
   }

}