// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long int cursum = 0;
        long long int maxsum = INT_MIN;
      //  long long int maxelement = INT_MIN;
        for(int i=0;i<n;i++){
            cursum+=arr[i];
          
            if(maxsum<cursum){
                maxsum=cursum;
             
            }
              if(cursum<0){
                cursum=0;
            }
            // if(arr[i]>maxelement){
            //     maxelement = arr[i];
           
            // }
        }
        
        
        return maxsum;
        //>0 ? maxsum : maxelement;
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends