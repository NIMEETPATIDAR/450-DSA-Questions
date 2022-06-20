// { Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


 // } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	// code here
    	int reverse,x,re;
    	for(int i=0;i<n;i++)
    	{
    	    reverse=0;
    	    x=a[i];
    	    while(x!=0)
    	    {
    	        re=x%10;
    	        reverse=reverse*10+re;
    	        x=x/10;
    	    }
    	    if(reverse!=a[i]) return 0;
    	}
    	return 1;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}  // } Driver Code Ends