#include <iostream>
#include <vector>
using namespace std ;


    int minimumOperations(vector<vector<int>>& grid) {
        
        int row = grid.size();
        int col = 
        
    }

int main(){

  vector<int> row1 = {1,1,1};
   vector<int> row2 = {0,0,0};

   vector<vector<int>> grid ;
   grid.push_back(row1);
     grid.push_back(row2);

     int row = grid.size();
     int col = grid[0].size();

     for(int i =0 ; i < row ; i++ ){

             for(int j =0 ; j < col ; j++ ){

            cout<<grid[i][j] <<"  ";
     }
             cout <<endl;
     }


    cout<< minimumOperations(grid);


}