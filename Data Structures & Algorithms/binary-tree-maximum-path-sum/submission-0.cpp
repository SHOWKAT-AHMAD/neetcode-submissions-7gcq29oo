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

class Solution {
    int dfs(TreeNode* root,int& maxpath){
        if(!root) return 0;
        
        int left=max(dfs(root->left,maxpath),0);
        int right=max(dfs(root->right,maxpath),0);
        int pathsum=root->val+left+right;
        maxpath=max(maxpath,pathsum);
        return root->val + max(left,right);
    }
public:
    int maxPathSum(TreeNode* root) {
        int maxpath=root->val;
        dfs(root,maxpath);
        return maxpath;

    }
};
