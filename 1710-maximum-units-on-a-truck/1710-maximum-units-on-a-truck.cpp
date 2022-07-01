class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        //as the largest number is small 1000 so instaed of sorting it in OlogN complexity we can simply use counting sort. make an array of 1001;
        int ans=0;
        vector<int> v(1001);
        for(auto it:boxTypes){
            v[it[1]]+=it[0];
        }
        for(int i=1000;i>=0;i--){
            if (truckSize>=v[i]){
                ans+=i*v[i];
                truckSize-=v[i];
            }
            else
            {
                ans+=truckSize*i;
                truckSize=0;
            }
        }
        return ans;
    }
};