class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int ctSum = nums[0]+nums[1]+nums[n-1];
        for(int i=0;i<n;i++){
            int start = i+1,end = n-1;
            while(start<end){
                int crSum = nums[i]+nums[start]+nums[end];
                if(crSum>target) end--;
                else start++;
                if(abs(crSum-target)<abs(ctSum-target)) ctSum = crSum;
            }
        }
        return ctSum;
    }
};