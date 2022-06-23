// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution 
{
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) 
    {
        // code here
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                pq.push(Mat[i][j]);
            }
        }
        int r=0;
        int c=0;
        while(!pq.empty())
        {
            Mat[r][c]=pq.top();
            pq.pop();
            c++;
            if(c==N)
            {
                r++;
                c=0;
            }
        }
        return Mat;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> v(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> v[i][j];
        Solution ob;
        v = ob.sortedMatrix(N, v);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) cout << v[i][j] << " ";
            cout << "\n";
        }
    }
}  // } Driver Code Ends