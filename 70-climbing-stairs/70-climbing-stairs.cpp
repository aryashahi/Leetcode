class Solution {
public:
    int climbStairs(int n) 
    {
        unsigned int f=0,s=1,next;
        
        while(n>0)
        {
            next=f+s;
            f=s;
            s=next;
            n--;
        }
        return next;
        
    }
};