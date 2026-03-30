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
    private:
    void bfs(TreeNode* root,int level,vector<vector<int>>& ans){
        if(!root) return;
        if (ans.size() == level)
            ans.push_back({});
        ans[level].push_back(root->val);
        bfs(root->left,level+1,ans);
        bfs(root->right,level+1,ans);
    }
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        bfs(root,0,ans);
        return ans;
    }
};
