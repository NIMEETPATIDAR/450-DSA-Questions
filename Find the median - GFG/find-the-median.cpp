// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    // Code here.
		    sort(v.begin(),v.end());
		    int res=0;
		    if(v.size()%2==0)
		    {
		        int elem1=v[(v.size()/2)-1];
		        int elem2=v[v.size()/2];
		        res=(elem1+elem2)/2;
		    }
		    else
		    {
		        int elem=v[v.size()/2];
		        res=elem;
		    }
		    return res;
		}
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(n);
    	for(int i = 0; i < n; i++)
    		cin>>v[i];
    	Solution ob;
    	int ans = ob.find_median(v);
    	cout << ans <<"\n";
    }
	return 0;
}
  // } Driver Code Ends