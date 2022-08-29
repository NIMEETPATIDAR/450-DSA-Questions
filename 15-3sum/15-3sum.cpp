class Solution 
{
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
            if(i==0 || (i>0 && nums[i-1]!=nums[i]))
            {
            int j=i+1;
            int k=nums.size()-1;
            while(j<k)
            {
            if(nums[j]+nums[k]==-nums[i])
            {
                vector<int> a;
                a.push_back(nums[i]);
                a.push_back(nums[j]);
                a.push_back(nums[k]);
                res.push_back(a);
                
                while(j<k && nums[j]==nums[j+1]) j++;
                while(j<k && nums[k]==nums[k-1]) k--;
                j++;
                k--;
                
            }
            else if(nums[j]+nums[k]<-nums[i])
            {
                j++;
            }
            else
            {
                k--;
            }
            }
            }
        }
        return res;
    }
};