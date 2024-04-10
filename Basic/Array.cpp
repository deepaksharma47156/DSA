#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <map>
#include <set>

#include<unordered_set>
using namespace std;





int main() {


unordered_set<string> uset ; 
uset.insert("bingo ");
uset.insert("is ");
uset.insert("my ");
uset.insert("namo ");


for (auto it = uset.begin(); it!= uset.end() ; it++ ){

    cout<<*it <<"  "<<endl;
}


/*

 multimap<int,int> mset ; 

mset.insert(pair<int,int>(1,3)) ; 
mset.insert(pair<int,int>(2,4)) ; 
mset.insert(pair<int,int>(1,2)) ; 




for (auto it = mset.begin(); it!= mset.end() ; it++ ){

    cout<<it->first << " & "<< it->second <<endl;
}


  






/*
   map<int, int> gquiz1;
 
    // insert elements in random order
    gquiz1.insert(pair<int, int>(4, 20));
    gquiz1.insert(pair<int, int>(5, 50));
    gquiz1.insert(pair<int, int>(6, 50));
    gquiz1.insert(pair<int, int>(1, 40));
    gquiz1.insert(pair<int, int>(2, 30));
    gquiz1.insert(pair<int, int>(3, 60));
       gquiz1.insert(pair<int, int>(4, 60));
 

for (auto it = gquiz1.begin() ; it != gquiz1.end() ; it++)
 {
    cout << it->first <<"  " << it->second <<endl;
 }

/*
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
