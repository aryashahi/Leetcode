// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:

   void helper(vector<int>arr,int N, int i, vector<int> &ans, int sum){
        if(i>=N){
            ans.push_back(sum);
            return;
        }
        helper(arr,N,i+1,ans, sum); //not pick
        sum+=arr[i];
        helper(arr,N,i+1,ans,sum);
        }


    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> ans;
        
        int index=0;
        helper(arr,N,index,ans,0);
        return ans;// Write Your Code here
    }
    
    
        
        
    
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends