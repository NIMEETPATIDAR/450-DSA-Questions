class Solution 
{
public:
    //vector<int> dp(31,0);
    
    
    int fibSolution(int n,vector<int>& dp)
    {
        if(n==0) return 0;
        if(n==1) return 1;
        if (dp[n]>0) return dp[n]; 
        dp[n]=fibSolution(n-1,dp)+fibSolution(n-2,dp);
        return dp[n];
    }
    int fib(int n) 
    {
        vector<int> dp(31, 0);
        int result=fibSolution(n,dp);
        return result;
    }
    
};