class Solution {
public:
    
void rec(int ind,vector<int> &candidates, vector<int> &ds,int n,int target,     vector<vector<int>>& ans){
    
    if(ind==n){
        if(target==0)
        {
            ans.push_back(ds);
        }
        return;
    }
    if(candidates[ind]<=target){
        ds.push_back(candidates[ind]);
        rec(ind,candidates,ds,n,target-candidates[ind],ans);
        ds.pop_back();
    }
    rec(ind+1,candidates,ds,n,target,ans);
    
}
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int>ds;
        int n=candidates.size();
        int sum=0;
        rec(0,candidates,ds,n,target,ans);
        return ans;
        
    }
};