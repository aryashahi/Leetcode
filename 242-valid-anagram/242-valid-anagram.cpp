class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>smap;
        unordered_map<char,int>tmap;
        if(s.size()==0 || t.size()==0)
            return false;
        for(int i=0;i<s.size();i++){
            smap[s[i]]++;
        }
        for(int j=0;j<t.size();j++){
            tmap[t[j]]++;
        }
        if(smap==tmap)
            return true;
        
        return false;
        
    }
};