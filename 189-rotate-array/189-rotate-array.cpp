class Solution {
public:
    void reverse(vector<int>& nums,int low,int high)
    {
        while(low<high)
        {
        swap(nums[low],nums[high]);
        low++;
        high--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int m=nums.size();
        k=k%m;
        reverse(nums,0,m-k-1);
        reverse(nums,m-k,m-1);
        reverse(nums,0,m-1);
        
      
    }
};