#include <iostream>
using namespace std;

int main(){

int n ;
cin >> n ;
int row=1, col=1 ;

while (row <= n){
   
    col =1 ;
    int count =1 ;
   while( col <= 2*n ){
   
     if(col > n-row  &&  col < n+row ){

      if(col > n-row && col <=n){
        cout<< count++ ; 
      if(col ==n){
         count--;
      }

      }
      else{
         cout<<--count;
      }
      
     }
     else{
      cout <<"-" ; 
     }
     col++;
   }
   row++;
   cout<<endl;
  
}




}
