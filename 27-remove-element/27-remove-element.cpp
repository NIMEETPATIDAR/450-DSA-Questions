class Solution 
{
public:
    int removeElement(vector<int>& nums, int val) 
    {       
        int i=0;
        for(int j=0;j<nums.size();j++)
        {
            if(nums[j]!=val)
            {
                swap(nums[i],nums[j]);
                i++;
            }   
        }
        return i;
    }
};

/*

 public int removeElement(int[] nums, int val){
        int slowIndex = 0;
        for (int fastIndex = 0; fastIndex < nums.length; fastIndex++) {
            if(nums[fastIndex] != val){
                if(slowIndex!=fastIndex) {
                    nums[slowIndex] = nums[fastIndex];
                }
                slowIndex++;
            }
        }
        return slowIndex;
    }

*/