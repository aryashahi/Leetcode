//BRUTE FORCE

class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int l=0;
        int r=height.size()-1;
        int max_area=INT_MIN;
        
        while(l<r){
            int base=r-l;
            int ht = min(height[l],height[r]);
            max_area = max(max_area,base*ht);
            if(height[l]>height[r])
                r--;
            else
                l++;
        }
        return max_area;
      
    }
};