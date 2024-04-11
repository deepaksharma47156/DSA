#include <iostream>
using namespace std ; 

int selectionSort(int a[] , int length){

 //smallest element at the right place 
  for(int i =0 ; i < length ; i++){
      int minIndex = i ;
      for(int j = i+1 ; j <length ; j++)
      {
            if(a[j] < a[minIndex]) 
                minIndex = j ;
      }
      swap(a[i], a[minIndex]);


  }

}

int bubblesort(int a[] , int length){

 //smallest element at the right place 
  for(int i =0 ; i < length ; i++){
     
      for(int j = 0 ; j <length-i-1 ; j++)
      {
            if(a[j] > a[j+1]) 
            swap(a[j], a[j+1]);
               
      }
      


  }

}

int binarySearch( int a[], int start_index, int end_index, int value){

       int mid = start_index + (end_index-start_index)/2 ;

       if ( start_index > end_index){
        return -1 ;
       }
       if ( value == a[mid] ){
           return mid;
       }

       if(a[mid ] > value) {
           //left tree 
             binarySearch(a,start_index, mid-1,value);
       }
       else{
           // right tree
            binarySearch(a, mid+1, end_index,value);
       }

}


int main() {

int a[] = {7,9,3,6,23,40,1,2} ; 

/* swap the smallest one at the begining or end */
selectionSort(a,8);

cout <<"selection sort -> ";
for(int i =0 ; i <8 ;i++){

    cout << a[i] <<" ";
}
/* compare adjesent and swap the order */
bubblesort(a,8);

cout <<endl<<"bubble sort -> ";
for(int i =0 ; i <8 ;i++){

    cout << a[i] <<" ";
}


// while(1) {


// int result = -1 ;
//  int input =-1 ; 
//  cin >> input ;

//  if(input == -2 ){
//     break;
//  }

// result = binarySearch(a, 0 , 8,input) ;

// cout << "index is => "<<result << endl ; 

}








