#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>

using namespace std;

  
    vector<string> strtok(string& st , char c){

      string s = "";
      vector<string> vs;
      for(int i =0 ; i < st.length(); i++){
      
          if(st[i] == c){
        //    cout << s<<endl;
            vs.push_back(s);
            s.clear();
          }
          else{
         
           s.push_back(st[i]);
          //    cout << " push back ->" << s <<endl;
          }
      }
      
      vs.push_back(s);
      return vs;
    }

    bool wordPattern(string pattern, string s) {

        unordered_map<char, string> mp;
        unordered_map<string, char> mp2;
        bool result = true ;
       vector<string> vs = strtok(s, ' ');

       if(pattern.length() != vs.size()){
    //    cout<<" size is not same "<<endl;
        return false ;
       }
 
    for(int i =0 ; i < pattern.length();i++){

          if(mp.count(pattern[i])){

              if(mp[pattern[i]] != vs[i]){
                result =  false ;
                break;
              }

          }
          else{
            mp[pattern[i]] = vs[i];

             cout<<" vs[i]" <<vs[i] <<" count "<<mp2.count(vs[i]) <<endl;
           if(mp2.count(vs[i])){
                result = false ;
                cout << "result return false "<<endl;
                break;
            }
            mp2[vs[i]] = pattern[i];

          }

    }




        return result;
    }
    int main()
    {
       string a ="abba" ;
       string b = "dog dog dog dog" ; 
     bool   result = wordPattern(a,b);
     cout<< "result = "<< result<<endl; 
        return result ;
    }