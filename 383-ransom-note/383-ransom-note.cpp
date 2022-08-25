class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>m1,m2;
        for(auto it:magazine){
            m1[it]++;
        }
        for(auto it: ransomNote){
            if(m1.find(it)!=m1.end() && m1[it]>0)
            {
                m1[it]-=1;
            }
            else
                return false;
        }
        return true;
        

    }
};