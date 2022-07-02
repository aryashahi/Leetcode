class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> hashmap;
        for(string& word : words) {
            hashmap[word] += 1;
        }
        priority_queue<pair<int, string>, vector<pair<int, string>>, MyComp> pq;
        for(auto it = hashmap.begin(); it != hashmap.end(); ++it) {
            pq.push(make_pair(it->second, it->first));
            if(pq.size() > k) pq.pop();
        }
        vector<string> res;
        while(!pq.empty()) {
            res.insert(res.begin(), pq.top().second);
            pq.pop();
        }
        return res;
    }
private:
    struct MyComp {
        bool operator() (const pair<int, string>& a, const pair<int, string>& b) {
            if(a.first != b.first) {
                return a.first > b.first;
            }
            else {
                return a.second < b.second;
            }
        }
    };
};

// class Solution {
// public:
//     vector<string> topKFrequent(vector<string>& words, int k) {
//         priority_queue<pair<int,string>>pq;
        
        
//          map<string,int, greater<string> >mp;
        
//         vector<string> ans;
        
//         for(int i=0;i<words.size();i++){
            
//             mp[words[i]]++;
            
//         }
        
        
        
//         for(auto x:mp){
//            pq.push({x.second,x.first});
//         }
        
//         for(int i=0;i<k;i++){
            
//             if(pq.size()==1)
//                 ans.push_back(pq.top().second);
//             auto top1 = pq.top();
//               pq.pop();
//             auto top2=pq.top();
//             pq.pop();
//             if(top1.first==top2.first && top1.second>top2.second){
//             ans.push_back(top2.second);
//             pq.push(top1);
//             }
//             else{
            
//             ans.push_back(top1.second);
//                 pq.push(top2);
            
//             }
        
//         }
        
        
//         return ans;
//     }
// };