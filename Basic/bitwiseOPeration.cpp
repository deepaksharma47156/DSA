#include <iostream>
using namespace std;


void decimalTOBinary(int dec){

    int binary =0 ; 

    if(dec == 0 )
    {
        return ; 
    }
    
    binary = dec%2 ;
    
    decimalTOBinary(dec/2);
    cout<<binary;

}

int main(){



int decimal ;

cin >>  decimal ; 

cout << "input ->" <<decimal <<endl;
if (decimal < 0 ){
    decimal = ~decimal  ;
}

cout << "input processed  ->" <<decimal <<endl;
decimalTOBinary(decimal) ; 

 return 0 ;
}