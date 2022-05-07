class Solution {
public:
    bool find132pattern(vector<int>& nums) 
    {
        int n=nums.size(),mini=nums[0];
        
        unordered_map<int,int>h;
        set<int>st;
        
        for(int i=1;i<n;i++)
        {
            st.insert(nums[i]);
            h[nums[i]]++;
        }
        for(int i=1;i<n-1;i++)
        {
            h[nums[i]]--;
            if(h[nums[i]]==0)st.erase(nums[i]);
            auto it=st.lower_bound(nums[i]);
            
            if(it!=st.end() || it!=st.begin())it--;
            if(it!=st.end() && *it>mini && *it<nums[i])return true;
            mini=min(mini,nums[i]);
        }
        return false;
    }};