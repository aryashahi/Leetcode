class Solution {
public:
    
    int getmax(int n, vector<int>cuts){
        
        sort(cuts.begin(),cuts.end());
        int maxD = cuts[0];
       int len = cuts.size();
        
        for(int i=1;i<cuts.size();i++){
            maxD = max(maxD, cuts[i]-cuts[i-1]);
            
        }
        return max(maxD, n-cuts[len-1]);
        
    }
    
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
         int mod =1e9+7;
        
        
        return ((long)getmax(h,horizontalCuts) *getmax(w,verticalCuts))%mod ;
        
        
    }
};