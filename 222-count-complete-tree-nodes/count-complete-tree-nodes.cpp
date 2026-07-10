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
    int lefth(TreeNode* root){
        if(root==NULL) return 0;
        int h=0;
        while(root){
            root=root->left;
            h++;
        }
        return h;
    }
    int righth(TreeNode* root){
        if(root==NULL) return 0;
        int h=0;
        while(root){
            root=root->right;
            h++;
        }
        return h;
    }
    int countNodes(TreeNode* root) {
        if(root==NULL) return 0;
        int lh=lefth(root);
        int rh=righth(root);
        if(lh==rh) return (1<<lh)-1;
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};