class Solution {
public:
    int longestPalindrome(string s) {
        
        unordered_map<char,long long>mp;
        long long ans=0,maxOdd=0;
        int cnt=0;
        if(s.length()==1)
            return 1;
        for(auto it:s){
            mp[it]++;
        }
        for(auto it:mp){
            if (it.second%2==0)
                ans+=it.second;
            else{
                cnt++;
                ans+=it.second-1;
            }
            
        }
        ans+=maxOdd;
        if(cnt>=1)
            ans+=1;
            return ans;
    }
};