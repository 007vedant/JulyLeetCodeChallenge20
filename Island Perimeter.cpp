class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int per = 0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++){
                int nei = 0;
                if(grid[i][j]) {
                    if(i > 0 && grid[i-1][j])
                        nei++;
                    if(j > 0 && grid[i][j-1])
                        nei++;
                    if(i < grid.size()-1 && grid[i+1][j])
                        nei++;
                    if(j < grid[i].size()-1 && grid[i][j+1])
                        nei++;
                    
                    per += 4 - nei;
                }
                
            }
        }
        
        return per;
    }
};