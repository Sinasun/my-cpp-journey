class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int counter = 0;
        for (int i = 0; i < grid.size(); i++){
            for (int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == 1){
                    if(i == 0){
                        counter++;
                    } else if(grid[i - 1][j] == 0){
                        counter++;
                    }
                    if (i == grid.size() - 1){
                        counter++;
                    } else if(grid [i + 1][j] == 0){
                        counter++;
                    }
                    if( j == 0 ){
                        counter++;
                    } else if(grid[i][j - 1] == 0){
                        counter++;
                    }
                    if (j == grid[0].size() - 1){
                        counter++;
                    } else if(grid[i][j + 1] == 0){
                        counter++;
                    }
                }
            }
        }
        return counter;        
    }
};