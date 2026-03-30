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
public:
    bool isValidBST(TreeNode* root) {
        int prev=INT_MIN;
        return dfs(root,prev);
    }
    bool dfs(TreeNode* root,int& prev){
        if(!root) return true;
        if(!(dfs(root->left,prev))) return false;
       
        if(prev>= root->val) return false;
        prev=root->val;
        if(!(dfs(root->right,prev))) return false;
        return true;
    }
};
