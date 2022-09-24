/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution 
{
public:

    void solve(TreeNode *root,int targetSum,vector<int> res,vector<vector<int>> &res2)
    {
        if(root==NULL) return;
        res.push_back(root->val);
        targetSum=targetSum-root->val;
        if(targetSum==0 && root->left==NULL && root->right==NULL)
        {
            res2.push_back(res);
            return;
        }
        solve(root->left,targetSum,res,res2);
        solve(root->right,targetSum,res,res2);
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) 
    {
        vector<int> res;
        vector<vector<int>> res2;
        solve(root,targetSum,res,res2);
        return res2;
    }
    
    
};