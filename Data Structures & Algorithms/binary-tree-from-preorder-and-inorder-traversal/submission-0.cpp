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
    TreeNode* build(vector<int>& preorder, vector<int>& inorder,int& index,int l,int r){
        if(l>r){
            return nullptr;
        }
        int pos=l; 
        while(inorder[l] != preorder[index]) l++;
        TreeNode* root=new TreeNode(preorder[index++]);
        root->left=build(preorder,inorder,index,pos,l-1);
        root->right=build(preorder,inorder,index,l+1,r);
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int index=0;
        return build(preorder,inorder,index,0,inorder.size()-1);
    }
};
