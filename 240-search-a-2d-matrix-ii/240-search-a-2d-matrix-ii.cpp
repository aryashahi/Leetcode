class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       //bool ans = false;
      int i=0,j=matrix[0].size()-1;
        
    while(i<matrix.size() && j>=0){
        if(matrix[i][j]==target)
            return true;
        else if(matrix[i][j]<target)
            i++;
        else if(matrix[i][j]>target)
        {
        
            j--;
        }
        // if(j==matrix[0].size())
        // {
        //     j=0;
        //     i++;
        // }
    }
        return false;
     
    }
};