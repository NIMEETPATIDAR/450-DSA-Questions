// By using Dynamic Programming
class Solution 
{
public:
    vector<int> getRow(int rowIndex) 
    {
        vector<int> dp(rowIndex+1,1);
        if(rowIndex<=1) return dp;
        for(int i=2;i<=rowIndex;i++)
        {
            for(int j=i-1;j>=1;j--)
            {
                dp[j]=dp[j]+dp[j-1];
            }
        }
        return dp;
    }
};

/*
By using Recurrsion
class Solution 
{
public:
    vector<int> getRow(int rowIndex) 
    {
        if(rowIndex==0) return {1};
        vector<int> currentRow={1};
        vector<int> previousRow=getRow(rowIndex-1);
        for(int i=1;i<rowIndex;i++)
        {
            currentRow.push_back(previousRow[i-1]+previousRow[i]);
        }
        currentRow.emplace_back(1);
        return currentRow;
    }
};
*/