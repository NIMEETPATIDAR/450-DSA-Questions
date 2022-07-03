class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> ans;
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++)
        {
            if(mpp.find(target-nums[i])!=mpp.end())
            {
                ans.push_back(mpp[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            mpp[nums[i]]=i;
        }
        return ans;
    }
};



/* Another way of writing the same (above) Solution.
class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int,int> umap;
        for(int i=0;i<nums.size();i++)
        {
            if(umap.count(target-nums[i])) return {i,umap[target-nums[i]]};
            umap[nums[i]]=i;
        }
        return {};
    }
};
*/