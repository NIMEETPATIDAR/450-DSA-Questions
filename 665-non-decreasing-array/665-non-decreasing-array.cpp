class Solution 
{
public:
    bool checkPossibility(vector<int>& nums) 
    {
        bool res=false;
        int pos=-1;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                if(pos!=-1) 
                {
                    res=false;
                    return res;
                }
                pos=i;
            }
        }
        if(pos==-1 || pos ==0 || pos==nums.size()-2 || nums[pos-1]<=nums[pos+1] || nums[pos]<=nums[pos+2])
        {
            res=true;
            return true;
        }
        return res;
    }
};