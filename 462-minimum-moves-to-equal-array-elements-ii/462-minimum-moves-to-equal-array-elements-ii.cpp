class Solution 
{
public:
    int minMoves2(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int count=0;
        for(int i=0,j=nums.size()-1;i<j;i++,j--)
        {
            count=count+(nums[j]-nums[i]);
        }
        return count;
    }
};

/*
int n=nums.size();
        sort(nums.begin(),nums.end());
        int median=n%2==0 ? (nums[n/2]+nums[n/2-1])/2 : nums[n/2];
        int count=0;
        
        for(int i:nums)
        {
            if(i>median)
            {
                int k=i-median;
                count=count+k;
            }
            else
            {
                int k=median-i;
                count=count+k;
            }
        }
        return count;
*/