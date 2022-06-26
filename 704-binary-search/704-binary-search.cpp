class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size();
        int mid;
        
        for(int i=0;i<nums.size();i++){
            mid=l+ (h-l)/2;
            if(nums[mid]>target)
                h=mid;
            else if(nums[mid]<target)
                l=mid;
            else
                return mid;
        }
        return -1;
    }
};