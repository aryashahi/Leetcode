class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> curr;
        backTrack(target, candidates, 0, result, curr);
        return result;
        
    }
    
    void backTrack(int target, vector<int>& candidates,int index, vector<vector<int>> &result,vector<int> &curr){
        
        if(target == 0 ){
            result.push_back(curr);
            return; 
        } else if ( target < 0){
            return;
        }
        
        for(int i=index; i<candidates.size(); i++){
            curr.push_back(candidates[i]);
            backTrack(target-candidates[i], candidates,  i, result, curr);
            curr.pop_back();
        } 
        
    }
};