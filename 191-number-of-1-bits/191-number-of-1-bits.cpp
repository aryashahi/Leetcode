class Solution {
public:
    int hammingWeight(uint32_t n) {
     int count=0;
        while(n!=0){
         int last_dig = n%2;
         n=n/2;
         if(last_dig==1)
             count+=1;
     }
        return count;
    }
};