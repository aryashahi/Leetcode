class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        
        for(auto x:stones){
            pq.push(x);
        }
        
        while(pq.size()>1){
            
         
          int top1=  pq.top();
          pq.pop();
          int top2 =  pq.top();
          pq.pop();
            
          if(top1!=top2)
              pq.push(abs(top1-top2));
                    
        }
        
                    if(pq.size() ==0)   return 0;
           
        else return pq.top();
        
    }
};