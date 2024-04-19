#include <iostream>
#include <vector>

using namespace std ;



void combination(vector<int> &numbs,vector<int> output, int start , int size  ){

if(start > size){
    for(int i =0 ; i < output.size() ; i ++){
        cout<<output[i] ;
    }
    cout<< endl;
    return ;
}

 combination(numbs, output, start+1, size);

 int x = numbs[start];
  output.push_back(x);

 combination(numbs,output, start+1, size);



}
void printallComb(string a , string b , int i , int j , int size , vector<char>& output,int count) {

       if( i >=size || j >=size ){

        return ;
       }
       count ++ ;

       if( count > 5) {
        return ;
       } 
        
       cout <<" "<<a[i] <<"  "<<b[j]<< endl; 
       printallComb( a ,  b , i++, j , 3, output,count) ;
       printallComb( a ,  b , i, j++ , 3, output, count) ;

}

int main() {


vector<int> numbs = {1,2,3};
vector<int> output ; 

// combination(numbs,output, 0 , 2 );

string a = "abc";
string b = "dfg" ;

vector<char> coutput ; 
int count =0 ;
printallComb( a ,  b , 0, 0 , 3, coutput, count) ;



}