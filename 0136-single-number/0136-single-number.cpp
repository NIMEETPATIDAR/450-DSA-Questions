class Solution 
{
public:
    int singleNumber(vector<int>& nums) 
    {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        int k=0;
        for(auto i:mpp)
        {
            if(i.second==1) k=i.first;
        }
        
        /*
        for(int i=0;i<nums.size();i++)
        {
        if(mpp[nums[i]]==1) k=nums[i];
        }
        */
        
        return k;
    }
};