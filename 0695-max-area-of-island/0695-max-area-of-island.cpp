class Solution {
    int dfs(int i,int j,vector<vector<int>>&grid){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]==0) return 0;
        grid[i][j]=0;
        int area=1;
        area+=dfs(i+1,j,grid);
        area+=dfs(i-1,j,grid);
        area+=dfs(i,j+1,grid);
        area+=dfs(i,j-1,grid);
        return area;
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxarea=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1)maxarea=max(maxarea,dfs(i,j,grid));
            }
        }
        return maxarea;
    }
};