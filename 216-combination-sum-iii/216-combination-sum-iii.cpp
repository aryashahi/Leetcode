//copy passted
class Solution {
private:
    vector<vector<int>> ans;
    int len, target;
    
    void allpos(int i, vector<int> vi, int sum) {
        if (i == 10 || i+sum > target)
            return;
        
        if (i<9)
            allpos(i+1, vi, sum);
        
        sum += i;
        vi.push_back(i);
        
        if (sum == target && vi.size() == len)
            ans.push_back(vi);
        
        if (vi.size() < len)
            allpos(i+1, vi, sum);
    }
    
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        len = k, target = n;
        vector<int> cur;
        
        allpos(1, cur, 0);
        return ans;
    }
};