class Solution 
{
public:
    int findKthLargest(vector<int>& nums, int k) 
    {
        int n=nums.size();
        /*int num[n];
        for(int i=0;i<n;i++)
        {
            num[i]=nums[i];
        }*/
        sort(nums.begin(), nums.end());
        return nums[n-k];
    }
};