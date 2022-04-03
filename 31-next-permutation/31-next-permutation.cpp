class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int n=nums.size();
        int index1=-1,index2=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1])
            { index1=i;
              break;
            }
        }
            if(index1<0)
            reverse(nums.begin()+index1+1,nums.end());
        else{
        for(int i=n-1; i>=0; i--)
        {
            if(nums[index1]<nums[i]){
                index2=i;
                break;
            }
        }
        swap(nums[index1],nums[index2]);
        reverse(nums.begin()+index1+1,nums.end());
    }
    }
};