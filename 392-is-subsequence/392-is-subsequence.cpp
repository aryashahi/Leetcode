class Solution {
public:
    bool isSubsequence(string s, string t) {
       int i=0,j=0;
        
        while(j<t.length()){
            if(s[i]==t[j])
            {
                i++;
                j++;
                
                
            }
            else
                j++;
        }
        if(i<s.size())
            return false;
        else
            return true;
    }
};