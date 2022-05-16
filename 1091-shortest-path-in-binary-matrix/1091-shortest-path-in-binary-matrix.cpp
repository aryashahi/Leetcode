//copy pasted
class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int cnt = 0;
        queue<pair<int,int>> q;
        int m = grid.size(), n = grid[0].size();
        if(grid[0][0]== 1 || grid[m-1][n-1] == 1) return -1; 
        // start cell
        q.push({0,0});
        grid[0][0] = 1; // set to 1 => visited
        
        while(!q.empty())
        {
            cnt++;
            int s = q.size();
            for(int i = 0 ; i < s; i++)
            {
                pair<int,int> top = q.front();
                q.pop();
                int x = top.first;
                int y = top.second;
                if(x==m-1 && y == n-1) return cnt; // we find end cell!
                /* valid edge and 8 directions
                        [y-1] to    [y+1]
                 [x-1] 
                 to           [x][y]
                 [x+1]
                */
                int lx = top.first - 1 >=0 ? top.first-1:0;
                int rx = top.first + 1 <m  ? top.first+1:m-1;
                int ly = top.second - 1 >=0 ? top.second-1:0;
                int ry = top.second + 1 <n  ? top.second+1:n-1;
                // 8 directions
                for(int j = lx ; j <= rx ; j++)
                {
                    for(int k = ly; k <= ry ; k++)
                    {
                        if(j == x && k == y) continue; // skip current cell
                        if(grid[j][k] != 1) // find unvisited cell 
                        {
                            grid[j][k] = 1;
                            q.push({j,k});
                        }
                    }
                }
            }
            
        }
        return -1;
    }
};
// class Solution {
// public:
//     int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
//        if(grid[0][0]==1)
//            return -1;
//         int m = grid.size();
//         int n = grid[0].size();
//         queue<int>q;
//         q.push({0,0,1});
            
//     }
// };