class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int i = 0;
        int j = nums.size()-1;
        sort(nums.begin(),nums.end());
        int ans = 0;
        while(i<j)
        {
            int x = nums[i]+nums[j];
            if (x>k) j--;
            else if (x<k) i++;
            else
            {  // Count and remove
                // cout << nums[i] << ", " << nums[j] << endl;
                ans++;
                i++;
                j--;
            }
        }
        return ans;
    }
};