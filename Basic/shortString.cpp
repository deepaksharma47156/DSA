#include <iostream>
#include <vector>
#include <string>

using namespace std ;

  int compress(vector<char>& chars) {
        int i =0 ;
        int ansIndex =0 ;
        char charv = chars[0];
        int count = 0 ;

        while(i < chars.size()){
                
                 charv = chars[i];
                 count = 0;
                 while((charv == chars[i]) && (i < chars.size()) ){
                      i++;
                      count++;
                 }
                 cout <<endl << " i = " << i <<" count "<<count<< " size "<<chars.size() <<endl ; 
                  chars[ansIndex++] = charv;
                 if(count > 1 ){

                    string s = to_string(count);
                for(int j = 0 ; j <s.size() ; j++){

                    chars[ansIndex++] = s[j]; 
                 }
      
            

                }
        }

        
        return ansIndex;
    }

int main () {


  vector<char> value = {'a'};

  int len =  compress(value);

   cout <<" printing compressed string => "; 
  for(int i =0 ; i < len ; i++){
     cout <<" "<<value[i] <<" " ;

  }



}