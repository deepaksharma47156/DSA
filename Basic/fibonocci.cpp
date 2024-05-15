#include<iostream>
#include<vector>
using namespace std;


int fibonacci(int input, vector<int> &memo ){

               if(input == 0 || input == 1){
                       return input ;
               }

               if(memo[input] != -1 ){
                       return memo[input];
               }
              
              memo[input] = fibonacci(input-1, memo )+ fibonacci(input-2,memo);

              return memo[input];
                 


}

int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */

        int input ;
      //  cin >> input ;
      input =5 ;

         int output ;
         vector<int> Memo;
         for(int i =0 ; i <=input; i++){
            Memo.push_back(-1);
         }

      //   output = fibonacci(input,Memo );

         cout << output;
   return 0;
}