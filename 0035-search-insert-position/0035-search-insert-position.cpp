class Solution 
{
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int i=0;
        int j=nums.size()-1;
        int mid=0;
        while(i<j)
        {
            mid=i+(j-i)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) i=mid+1;
            else j=mid-1;
        }
        if(nums[i]>=target) return i;
        else return i+1;
    }
};