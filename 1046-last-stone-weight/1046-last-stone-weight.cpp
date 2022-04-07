class Solution {
public:
    int lastStoneWeight(vector<int>& v) {
     priority_queue<int> pq(v.begin(),v.end());
        int ans=0;
        while(true){
            if(pq.size() ==0)   return 0;
            if(pq.size() ==1)   return pq.top();
            int m1 = pq.top();
            pq.pop();
            int m2 = pq.top();
            pq.pop();
            
            if(m1!=m2){
                pq.push(abs(m1-m2));
                
            }
        }
        
    }
};