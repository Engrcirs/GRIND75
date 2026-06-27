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
    bool isBalanced(TreeNode* root) {
        int result = dfs(root);
        if(result == -1){
            return false;
        }else{
            return true;
        }
    }
private:
    int dfs(TreeNode* node){
        if(node == nullptr){
            return 0;
        }
        int leftHeight = dfs(node->left);
        if(leftHeight == -1) return -1;

        int rightHeight = dfs(node->right);
        if(rightHeight == -1) return -1;
        if(std::abs(leftHeight - rightHeight) > 1){
            return -1;
        }
        return std::max(leftHeight, rightHeight) + 1;
    }
};