class Solution 
{
public:
    int missingNumber(vector<int>& nums) 
    {
        int mn;
        int n=nums.size();
        int sum=0;
        int total=0;
        sum=n*(n+1)/2;
        for(int element:nums)
        {
            total=total+element;
        }
        return mn=sum-total;
    }
};