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
    vector<int> inorderTraversal(TreeNode* root) 
    {
        vector<int> res;
        recursiveInorder(root,res);
        return res;
    }
    void recursiveInorder(TreeNode* root,vector<int> &res)
    {
        if(root==NULL) return;
        recursiveInorder(root->left,res);
        res.push_back(root->val);
        recursiveInorder(root->right,res);
    }
};






/*class Solution {
public:
    
    void inorder(TreeNode* root, vector<int> &res){
        if(!root) return;
        inorder(root->left, res); // calling recursion on left child of root
        res.push_back(root->val); //storing the value of current node 
        inorder(root->right, res); //// calling recursion on right child of root
    }
    
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        inorder(root, res);
        return res;
    }
};*/