class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0, index=-1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum-nums[0]==0)
            return 0;
      
        int left=0,right;
        for(int i=1;i<nums.size()-1;i++){
            
            left+=nums[i-1];
            right=sum-nums[i]-left;

            if(left==right)
            {    index=i;
                 break;
            }
        }
           if(sum-nums[nums.size()-1]==0 &&index==-1)
             return nums.size()-1;
        return index;
            
    }
};