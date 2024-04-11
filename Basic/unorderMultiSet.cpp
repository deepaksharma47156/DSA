#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std ;


int main() {

    vector<int> vint  = {4,3,2,7,8,2,3,1};
   
   cout << " size => "<< vint.size() <<endl;

     unordered_multiset<int> uset ;

     for(int i =0 ; i <  vint.size() ; i++ ) {
        uset.insert(vint[i]);
    }
    
    
    
    for(auto it = uset.begin() ; it != uset.end() ; it++){

        

            cout << *(it+1) << " " <<endl;
          
    }

    




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