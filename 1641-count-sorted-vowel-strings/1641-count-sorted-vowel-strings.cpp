class Solution {
    int counter;
    void helper(int &count, int idx, int n)
    {
        if(count == n)
        {
            counter++;
            return;
        }

        for(int i = idx; i < 5; i++)
        {
            count++;
            helper(count, i, n);
            count--;        
        }
    }
    
public:
    int countVowelStrings(int n) {
        int count  = 0;
        helper(count, 0, n);
        return counter;
    }
};