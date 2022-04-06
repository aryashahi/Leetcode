class Solution {
public:

int threeSumMulti(vector<int>& arr, int target) {
    
    unordered_map<int,int>mp; //Using unordered map
    
    int result = 0;
    int mod = 1e9+7;
    
    for(int i=0;i<arr.size();++i)
    {
        result = (result + mp[target - arr[i]]) % mod;
        
        for(int j=0;j<i;++j)
        {
            mp[arr[i] + arr[j]]++;
        }
    }
    return result;
}
};

// class Solution {
// public:
//     int threeSumMulti(vector<int>& arr, int target) {
//         unordered_map<int,int>mp;
//         sort(arr.begin(),arr.end());
//         //set<int>s;
//        int count=0;
//         for(int i=0;i<arr.size();i++){
//            mp[arr[i]]++;
//            // s.insert(arr[i]);
//         }
        
//      for(int i=0;i<arr.size()-1;i++){
//           for(int j=i+1;j<arr.size();j++){
//               int c =target-arr[i]-arr[j];
//               if(c>=arr[i] &&c>=arr[j]){
//                   if(mp.find(c)!=mp.end())
                      
//                       count++;
//               }
//                       //mp.at(s[i])*mp.at(s[j])* mp.at(s[k]);
//                }
//      }
//         return count;
//     }
// };