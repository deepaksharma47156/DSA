#include<iostream>
#include<string>
using namespace std ;



    int  index(char& c){

     int index = 0 ;

         if((c >='a' && c<='z') ){
            index = c - 'a';
         }
         else if ( (c >='A' && c <='Z'))
         {
            index = c -'A';

         }

         return index;
    }
    bool isAlpha(char& c ){

        if((c >='a' && c<='z') || (c >='A' && c <='Z') ){
            return true;
        }

        return false ;
    }
    
    bool ValidPD(string& s , int start , int end ){
        cout <<" valid pd called "<<endl;

        while(!isAlpha(s[start]) && start <=end ){
            cout<<" start alpha called " <<endl;
            start++;
        }

        while(!isAlpha(s[end]) && start >= end ){
               cout<<" end alpha called " <<endl;
            end--;
        }
         
         if(start > end ){
            return true ;
         }

         if(index(s[start]) == index(s[end])){
            return ValidPD(s , start+1, end-1);
         }
         else{
            return false ;
         }

    }

    bool isPalindrome(string s) {

        if(s.length() <=1 ){
            return true;
        }
        cout<<"is pal called "<<endl;
      //    transform(s.begin(), s.end(), s.begin(), ::tolower); 
        bool result = ValidPD(s , 0 , s.length()-1);

        return result ;
        
    }


    int main(){
        
      //  string input = "A man, a plan, a canal: Panama";
       string input = "caac";
        cout <<"hellow world " <<endl;

        cout << "result = " << isPalindrome(input);



return 0 ;
    }
