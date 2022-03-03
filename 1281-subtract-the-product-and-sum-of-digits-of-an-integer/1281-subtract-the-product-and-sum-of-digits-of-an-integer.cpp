class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int mul=1;
        while(n){
            int last_digit=n%10;
            n=n/10;
            sum+=last_digit;
            mul=mul*last_digit;
        }
        return mul-sum;
    }
};