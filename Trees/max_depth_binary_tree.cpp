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
    int maxDepth(TreeNode* root) {
        int left_depth = 0;
        int right_depth = 0;
        int max_length = dfs(root, left_depth, right_depth);
        
        return max_length;
        
    }
private:
    int dfs(TreeNode *root, int left_depth, int right_depth) {
        if (root == nullptr) return max(right_depth,left_depth); 
        
        right_depth++;
        left_depth++;

        int left_max = dfs(root->left, left_depth, right_depth);
        int right_max = dfs(root->right, left_depth, right_depth); 

        return max(left_max, right_max);
       
    }
};
