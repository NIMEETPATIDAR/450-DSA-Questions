class Solution 
{
public:
    void sortColors(vector<int>& nums) 
    {
        // red=0   white=1    blue=2
        int left=0;
        int right=nums.size()-1;
        
        for(int i=0;i<=right;i++)
        {
            if(nums[i]==0)
            {
                swap(nums[i],nums[left]);
                left++;
            }
            else if(nums[i]==2)
            {
                swap(nums[i],nums[right]);
                right--;
                i--;
            }
        }
        
    }
};



/*
class Solution 
{
    public void sortColors(int[] nums) 
    {
        int length = nums.length;
        if(length==0)
        {
        return;
        }
        int l=0;
		int m=0;
		int h= length-1;
		int temp;
            while(m <= h)
            {
                if(nums[m] == 1)
                    m++;
                else if(nums[m] == 0)
                {
                    temp = nums[l];
                    nums[l] = nums[m];
                    nums[m] = temp;
                    m++;
                    l++;
                }
                else if(nums[m] == 2)
                {                                
                    temp = nums[h];
                    nums[h] = nums[m];
                    nums[m] = temp;
                    h--;
                }
            }  
    
        
        
        
    }
}
*/