#include <iostream>
#include <vector>

using namespace std;

    int solve(int arr[], int sum , int size,  vector<vector<int>>& dp){
        
        if( sum==0){
            return 1;
        }
        if(size < 0 || sum < 0){
            return 0;
        }
        
        if(  dp[size][sum] != -1){
              return dp[size][sum]; 
        }
        
        int include =  solve(arr, sum-arr[size] , size-1,dp);
        int exclude = solve (arr, sum,size-1,dp);
        
        dp[size][sum] = (include || exclude);
        return   dp[size][sum];
        
        
        
        
    }
    int main()
    {
        // code here
        int N =4 ;
        int arr[] = {1,5,11,5};


        int sum =0; 
        for(int i =0 ; i < N ;i++){
            sum = sum + arr[i];
        }
         
        if(sum%2 ==1){
            cout<< "sum is odd value"<<sum<<" "<<(sum%2)<<endl;
            return 0;
        } 
        
        vector<vector<int>>dp(N+1,vector<int>(sum+1,-1));
        
        int  result = solve(arr ,sum/2, N-1,dp);
        cout <<"output is "<< result<<endl;
        return result ;
    }