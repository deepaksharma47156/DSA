#include <iostream>

using namespace std ; 


int partition(int arr[], int start , int end ){
  
  int pivot = arr[start] ;
  int count =0 ; 
  for(int i =start+1 ; i <= end ; i++ ){

     if( pivot >= arr[i])
        count++;
  }

  int pivotIndex = start+ count;
  swap(arr[start], arr[pivotIndex]);

  int j = start ; 
  int z = end ;

  while( j < pivotIndex && z> pivotIndex ){

     while(arr[j] <= arr[pivotIndex]){
        j++;

     }

    while(arr[z] > arr[pivotIndex]){
        z--;

     }

     if(j < pivotIndex && z> pivotIndex){
        swap(arr[j], arr[z]);
        j++;
        z--;
     }



  }





}

void quicksort(int arr[], int start , int end ) {

   if (start >= end || start < 0 || end > 9){

      return ;
   }

   int pivot = partition(arr, start , end) ;

   quicksort(arr , start , pivot-1);
   quicksort(arr , pivot+1 , end);



}


int main(){



int arr[10] = {1,7,88,9,3,6,8,4,5,0} ;


quicksort(arr , 0 , 9);

for(int i =0 ; i <= 9 ; i++){

    cout << arr[i] << "  " ;
}

}