#include <iostream>
#include <unordered_set>
#include <vector>
#include <iostream>
#include <map>
#include <string>

using namespace std ;


int main() {


    map<string, bool> map;
 
    // Insert some values into the map
    map["one"] = true;
    map["two"] = true;
    map["three"] = true;
 
    // Print the values in the map
    cout << "Key: one, Value: " << map["one"] << endl;
    cout << "Key: two, Value: " << map["two"] << endl;
    cout << "Key: three, Value: " << map["three"] << endl;
    cout << "Key: three, Value: " << map["four"] << endl;
 
    // Check if a key is in the map
    if (map.count("four") > 0) {
        cout << "Key 'four' is in the map" << endl;
    }
    else {
        cout << "Key 'four' is not in the map" << endl;
    }
 
  



/*
    vector<int> vint  = {4,3,2,7,8,2,3,1};
   
   cout << " size => "<< vint.size() <<endl;

     unordered_multiset<int> uset ;

     for(int i =0 ; i <  vint.size() ; i++ ) {
        uset.insert(vint[i]);
    }
    
    
    
    for(auto it = uset.begin() ; it != uset.end() ; it++){

        

            cout << it << " " <<endl;

        
          
    }
*/
    




 /*
unordered_multiset<int> multiset ; 

int j =1 ;
int a[10] = {0,1,2,0,1,2,0,1,2,0};
while(j < 100) {



for(int i =0 ; i < 10 ; i++){

multiset.insert(a[i]);

}
cout << multiset[0]; 

for (auto it = multiset.begin() ; it != multiset.end() ; it++) {

    cout << *it << "  " ;
}

multiset.clear();
 cout <<endl;
 j++;
}
*/
}