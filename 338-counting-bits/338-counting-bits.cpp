class Solution {
public:
    vector<int> countBits(int n) {
       vector<int>ans(n);
         ans.push_back(0);
        if(n==0)
            return ans;
        for(int i=1;i<=n;i++){
            if(i%2==0)
                ans[i]=ans[i/2];//if no.is even then no. of 1'2 in the bit will be same its half no. eg 8 and 4 have same 1 bit
            else
                ans[i]=ans[i-1]+1; //if no. is odd then no. of 1 in its bit will be equal to no. of 1's in its previous one+1 
        }
        return ans;
    }
};
// class Solution {
// public:
//     vector<int> countBits(int num) {
//         vector<int> res(num);
//         res.push_back(0);  // for num=0
//         if(num==0) return res;
        
//         for(int i=1;i<=num;i++){
//             if(i%2==0){
//                 res[i]=res[i/2];
//             } else {
//                 res[i]=res[i-1]+1;
//             }
//         }
//         return res;
//     }
// };