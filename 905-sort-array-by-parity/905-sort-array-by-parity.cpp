class Solution 
{
public:
    vector<int> sortArrayByParity(vector<int>& nums) 
    {
        int temp=0;
        for(int i=0,j=0;j<nums.size();j++)
        {
            if(nums[j]%2==0)
            {
                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                i++;
            }
        }
        return nums;
    }
};