// By using Space Optimization
class Solution
{
public:
    int climbStairs(int n)
    {
        int a=1;
        int b=1;
        int c=1;
        for(int i=2;i<=n;i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }
};




/*
// By using Dynamic Programming (Tabulation)
class Solution 
{
public:
    int climbStairs(int n) 
    {
        int arr[46];
        arr[0]=1;
        arr[1]=1;
        arr[2]=2;
        int i=0;
        for(i=3;i<=n;i++)
        {
            arr[i]=arr[i-1]+arr[i-2];
        }
        return arr[n];
    }
};
*/

/*
// By using Dynamic Progaramming (Memoization)
class Solution 
{
public:
    int sol(int n,vector<int> &dp)
    {
        if(n==0) return 1;
        if(n==1) return 1;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=sol(n-1,dp)+sol(n-2,dp);
    }
    
    int climbStairs(int n) 
    {
        vector<int> dp(n+1,-1);
        int result=sol(n,dp);
        return result;
    }
};
*/