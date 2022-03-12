class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        set<int> s;
        
        for(int i=0;i<nums.size();i++){
        s.insert(nums[i]);
        }
       long long int sum = (long(k)*long(k+1))/2;
        for(auto it:s){
            if(it<=k){
                sum-=it;
                sum+=k+1;
                k++;
            }
            else 
              break;
            }
        
        return sum;
    }
};