class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
	// Total possible subsets are 2^n
       int size = 1 << nums.size();
	   
        vector<vector<int>>ans;
        for(int i = 0;i < size;i++) {
            vector<int>temp;
            for(int j = 0;j < nums.size();j++) {
                if(i & (1 << j))    // Using binary counting
                    temp.push_back(nums[j]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};