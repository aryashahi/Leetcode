class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
          int  ans = INT_MAX;
            int pos=-1;
        //bool flag = false;
        for(int i=0;i<points.size();i++){
          
            if(points[i][0]==x || points[i][1]==y){
                
                    int distance= abs(x - points[i][0]) + abs(y - points[i][1]);
                    if(ans>distance){
                        
                    ans=distance;
                    
                    pos= i;
                       
                    }
                }
                        
            }
return pos;
      
    }
};