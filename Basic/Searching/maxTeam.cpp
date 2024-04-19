/* Read input from STDIN. Print your output to STDOUT*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <vector>
#include<iostream>
#include <algorithm>

using namespace std;

int findMaxTeamForWeightRange(vector<int>& totalplayerWeight, int startRange , int endRange){

   int posibleTeams =0 ;
   
    int i = 0 ; 
    int j = totalplayerWeight.size()-1;
  

    while( i < j ){
        int sum =totalplayerWeight[i] + totalplayerWeight[j];

          if(sum < startRange){
             i++;
          }
          else if(sum> endRange){
              j--;
          }else{
              i++;
              j--;
              posibleTeams++;
          }

    }






   return posibleTeams;
}

int findMaxTeamForWeight(vector<int>totalplayerWeight , int midw)
{

    int i = 0 ; 
    int j = totalplayerWeight.size()-1;
    int totalTeam =0 ;

    while( i < j ){
       // cout <<"inside -> i - j "<<i<<"-"<<j<<endl; 
        int sum =totalplayerWeight[i] + totalplayerWeight[j];

          if(sum == midw){
              totalTeam++;
              i++;
              j--;
          }
          else if(sum>midw){
              j--;
          }else{
              i++;
          }


    }
     return totalTeam;
}
   void findWeightForMaxTeams(vector<int>totalplayerWeight, int start , int end , int& maxWeight,int& maxTeam){

        if(start > end){
            return;
        }

        int midw = start + (end-start)/2;

       int teams =  findMaxTeamForWeight(totalplayerWeight , midw);
      // cout << " midw = "<<midw <<" teams = " << teams << endl; 

       if(teams >= maxTeam){

         maxTeam = teams;

         maxWeight = midw;
         if(teams = maxTeam){
             maxWeight = min(maxWeight,midw);
         }
       }

       int maxRight = findMaxTeamForWeightRange(totalplayerWeight, midw+1 , end);
       int maxLeft = findMaxTeamForWeightRange(totalplayerWeight, start , midw-1);

       //     cout << " maxRight = "<< maxRight <<" range = " << midw+1 <<"-" <<end; 
       //       cout << " maxLeft = "<< maxLeft <<" range = " << start <<"-" <<midw-1<< endl; 

       if(maxLeft > maxRight){

            findWeightForMaxTeams(totalplayerWeight, start , midw-1 , maxWeight,maxTeam);
       }else if (maxLeft < maxRight){
                findWeightForMaxTeams(totalplayerWeight, midw+1 , end, maxWeight,maxTeam);
       }
       else{
               findWeightForMaxTeams(totalplayerWeight, start , midw-1 , maxWeight,maxTeam);
                   findWeightForMaxTeams(totalplayerWeight, midw+1 , end, maxWeight,maxTeam);

       }






     
   }

int main(int argc, char *a[])
{
    //Write code here

        int totalP ;
	int Pweight;
	cin >> totalP ; 

	vector<int> totalplayerWeight ;

	for(int i =0 ; i < totalP ; i++){
		cin >>Pweight ; 
		totalplayerWeight.push_back(Pweight);

	} 

    sort(totalplayerWeight.begin(), totalplayerWeight.end());

     int maxWeight = totalplayerWeight[totalP-1];
     int maxTeam = 0 ;

   findWeightForMaxTeams(totalplayerWeight, 0 , totalP-1 , maxWeight,maxTeam);
  // cout << "maxweight = " << maxWeight <<" and max teams = "<<maxTeam;
   cout << maxWeight;

}
