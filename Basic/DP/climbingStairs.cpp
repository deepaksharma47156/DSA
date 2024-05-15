#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;


int findways(int n , int start  ){

    if(start > n ){
        return 0 ;
    }
    if(start == n ){
        return 1;
    }

   return findways(n, start+1)+ findways(n, start+2);



}

int findcost(int size, int cost[] , int startIndex, int minCost ){

     if(startIndex == size ){

        cout<<" index = "<< startIndex<< " cost - "<<minCost<<endl;

        return minCost;

     }

    if(startIndex > size ){

         cout<<" INT_MAX "<<endl;

        return INT_MAX;

    }

    int oneStep= INT_MAX, twostep=INT_MAX;
     if(startIndex+1 <= size){

            oneStep = (findcost(size, cost, startIndex+1, minCost+(cost[startIndex+1])));
     }
     if(startIndex+2 <= size){

            twostep = findcost(size, cost, startIndex+1, minCost+(cost[startIndex+2]));
     }



    return min(oneStep,twostep);



}

int main(){

    int cost[] = {1,100,1,1,1,100,1,1,100,1};
    int count = 10 ;

   vector<int> minCost(count+1);

   for(int i =0 ; i <= count ; i++){
    minCost[i] = INT_MAX;
   }

   minCost[0] = 0 ;
   minCost[1] = 0 ;

   for(int i =0 ; i <=count ; i++){
 
       if(i+1 <= count){

        minCost[i+1] = min(minCost[i+1] , minCost[i]+cost[i]);

       }
       if(i+2 <=count){


         minCost[i+2] = min(minCost[i+2] , minCost[i]+cost[i]);

       }   
        

   }
    vector<int,vector<int>>dp(1,vector<int>(1,-1));

   cout<<" result =" << minCost[count];

    

  






}