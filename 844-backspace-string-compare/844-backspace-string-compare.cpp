class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char> s1,t1;
        
        
        for(auto x:s)
        {
            if(x=='#')
            { if(s1.size()!=0)
            s1.pop_back();
        }
            else
            s1.push_back(x);
        }
        
        for(auto x:t)
        {
            if(x=='#' )
            {if(t1.size()!=0)
            t1.pop_back();
            }
            else
            t1.push_back(x);
        }
        return s1==t1;
        
    }
};