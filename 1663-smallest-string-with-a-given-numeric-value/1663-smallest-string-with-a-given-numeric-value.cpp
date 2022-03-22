class Solution {
public:
    string getSmallestString(int n, int k) {
        
        

            string ans (n,'a');
            k=k-n;
            
            while(k>0){
                n--;
                ans[n]= ans[n] + min(k,25);
                k-=min(k,25);
            }
        return ans;
        
    }
};