class Solution {
public:
    void dfs(vector<vector<char>>& grid,int i, int j, int row, int col){
        
        if(i<0 ||j<0 || i>=row ||j>=col|| grid[i][j]!='1')
            return;
        grid[i][j]='2';
        dfs(grid,i+1,j,row,col);
        dfs(grid,i,j+1,row,col);
        dfs(grid,i-1,j,row,col);
        dfs(grid,i,j-1,row,col);
    }
    
    
    int numIslands(vector<vector<char>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();
        if(rows==0)
            return 0;
        int no_of_island = 0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]=='1')
                {dfs(grid,i,j,rows,cols);
                no_of_island++;
                }
                }
            
        }
        return no_of_island;
    }
};