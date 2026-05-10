/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 * };
 */

void preorder(TreeNode* root, vector<string>& vec){

    if(root == NULL){
        vec.push_back("N");
        return;
    }

    vec.push_back(to_string(root->val));

    preorder(root->left, vec);
    preorder(root->right, vec);
}

class Solution {
public:

    bool isSameTree(TreeNode* p, TreeNode* q) {

        vector<string> pre1;
        vector<string> pre2;

        preorder(p, pre1);
        preorder(q, pre2);

        return pre1 == pre2;
    }
};