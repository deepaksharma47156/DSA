#include <iostream>
#include <array>
#include <vector>
#include <deque>
using namespace std;





int main() {


deque<int> testDqueue ; 

testDqueue.push_front(1);
testDqueue.push_front(2);
testDqueue.push_back(3);
testDqueue.push_back(4);


 for (auto it = testDqueue.begin() ; it != testDqueue.end() ; it++)
 {
    cout << *it <<"  ";
 }





/*
vector<int> arrayV(5, -2 );

for (int i =0 ; i < 5 ; i++){
    arrayV.push_back(i);
}
for (int i =0 ; i < arrayV.size() ; i++){
    cout <<arrayV[i] << " " ; 
}

cout <<" printing from auto itertor -> "<<endl ; 
for (auto it = arrayV.begin() ; it != arrayV.end() ; it++){
    cout<< *it <<endl;
}
cout <<" max size " << arrayV.max_size() <<endl;
cout <<"  size " << arrayV.size() <<endl;
cout <<" capacity " << arrayV.capacity() <<endl;



 //sequence container 
//vector 


 // array 
  /*
  array<int, 5 > arr ; 
  arr.fill(-1);

  arr[3] = 5 ;

  for (auto x : arr){
    cout << x <<" " ; 
  }
*/

/*
    int a[10] = {1,2,3,4,5,6,7,8,9,10};

    int size = sizeof(a)/sizeof(int) ; 

    cout <<" print the size " << size << endl; 

    for(int i =0 ; i < size/2 ; i++){
       
        int temp = a[size -i -1 ];
        a[size -i -1 ] = a[i] ;
        a[i] = temp ; 


    }

    for(int i =0 ; i < size ; i++){
       
     cout<<" " << a[i] ; 


    }
*/

    return 0 ; 
}
