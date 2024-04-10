#include <iostream>
#include <unordered_set>

using namespace std ;


int main() {

unordered_multiset<int> multiset ; 

int j =1 ;
int a[10] = {0,1,2,0,1,2,0,1,2,0};
while(j < 100) {



for(int i =0 ; i < 10 ; i++){

multiset.insert(a[i]);

}

for (auto it = multiset.begin() ; it != multiset.end() ; it++) {

    cout << *it << "  " ;
}

multiset.clear();
 cout <<endl;
 j++;
}

}