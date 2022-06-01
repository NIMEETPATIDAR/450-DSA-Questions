class Solution 
{
public:
    vector<int> runningSum(vector<int>& nums) 
    {
      
    
    
    vector<int> sum = nums;
        
        for (int i = 1; i < nums.size(); i++) 
        {
            sum[i] = sum[i-1] + nums[i];
        }
        
        return sum;
    }
};