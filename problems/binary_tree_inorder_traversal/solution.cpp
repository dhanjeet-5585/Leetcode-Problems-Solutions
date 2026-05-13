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

void inorder(TreeNode* root, vector<int> &vec){

    if(root == nullptr){
        return;
    }

    inorder(root->left, vec);

    vec.push_back(root->val);

    inorder(root->right, vec);
}
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {

        vector<int> inorder_traversal;
        inorder( root , inorder_traversal);
        return inorder_traversal;
        
    }
};