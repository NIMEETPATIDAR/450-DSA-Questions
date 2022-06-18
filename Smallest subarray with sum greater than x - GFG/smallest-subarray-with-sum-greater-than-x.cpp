// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here   
        int curr_sum=0;
        int min_len=n+1;
        int start=0;
        int end=0;
        
        while(end<n)
        {
            while(curr_sum<=x && end<n)
            {
                curr_sum=curr_sum+arr[end];
                end++;
            }
            while(curr_sum>x && start<n)
            {
                if(end-start<min_len)
                {
                    min_len=end-start;
                }
                curr_sum=curr_sum-arr[start];
                start++;
            }
        }
        return min_len;
    }
};

// { Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}  // } Driver Code Ends