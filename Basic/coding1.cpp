#include <iostream>
#include <string>
using namespace std ; 


    int numberOfSpecialChars(string word) {
         int count =0 ;
        int a[26] ; 
        for(int i =0 ; i < 26 ; i++){
            a[i] = 0 ; 
        }
        
        for(int i =0 ; i < word.length() ; i++){
            
            if ( word[i] >='A' && word[i] <='Z')
            {
               if( (a[int(word[i] - 'A')] == 1) || (a[int(word[i] - 'A')] == 3)){ 
               a[int(word[i] - 'A')] =  (a[int(word[i] - 'A')] | 2)  ;
               }
               else {
                  a[int(word[i] - 'A')] = 7;
               }
                
            }else if ( word[i] >='a' && word[i] <='z')
            {

                if(  a[int(word[i] - 'a')] > 1 ){
                     a[int(word[i] - 'a')] = 7;
                }
  
                
                a[int(word[i] - 'a')] = ( a[int(word[i] - 'a')] | 1) ;
                
            }

        //    cout <<" ch ="<< word[i] <<" index ="<<int(word[i] - 'a') 
         //   <<"-"<<int(word[i] - 'A')  << "value=  " << a[int(word[i] - 'a')] << endl;
            
        }
        
       
        for(int i =0 ; i < 26 ; i++){

          // cout <<" value i ="<<i<<"   "<<a[i] <<endl;
            
            if(a[i] == 3 ){

              //  cout << " count ++ " << i  <<endl; 
                count++;
            }
        }

        for(int i =0 ; i < 26 ; i++){

           cout <<" value i ="<<i<<"   "<<a[i] <<endl;
            
 
        }
        
   
        return count;
    }

int main(){


    string s = "dcbCC";


    cout << numberOfSpecialChars(s);



}


