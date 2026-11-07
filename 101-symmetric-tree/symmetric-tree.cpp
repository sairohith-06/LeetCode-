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

bool check(TreeNode* left , TreeNode*right){
    if(left == NULL && right == NULL){
        return 1; 
    }
    if(left == NULL || right == NULL ){
        return 0 ;
    }
    if(left->val != right->val){
        return 0 ;
    }

    return check(left->left,right->right) && check(left->right,right->left) ;
}
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
       if(root == NULL){
        return true ;
       }
       if(check(root->left,root->right)){
        return 1 ;
       }
       return 0 ; 
       
    }
};