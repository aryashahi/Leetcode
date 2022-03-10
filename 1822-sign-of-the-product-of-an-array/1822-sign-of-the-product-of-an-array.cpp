class Solution {
public:
    int arraySign(vector<int>& nums) {
         int pd =1;
        for(auto x : nums){
            if(x<0)
                pd=pd*-1;
    
        else if(x==0)
            return 0;
        
    }
        return pd;
    }       
};