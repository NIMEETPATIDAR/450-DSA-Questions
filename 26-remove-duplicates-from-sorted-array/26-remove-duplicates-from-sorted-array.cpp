class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int sz=nums.size();
        int i=0;
        
        for(int j=1;j<nums.size();j++)
        {
            if(nums[j]!=nums[i])
            {
                i++;
                nums[i]=nums[j];
            }   
        }
        int count=i+1;
        return count;
        
    }
};