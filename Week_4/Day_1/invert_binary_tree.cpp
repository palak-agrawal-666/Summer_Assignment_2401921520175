/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution
{
public:
    TreeNode *invertTree(TreeNode *root)
    {
        if (!root)
            return NULL;

        swap(root->left, root->right);

        invertTree(root->left);
        invertTree(root->right);

        return root;
    }
};

/*
    void myFunc(TreeNode* node){
        if(node == NULL) return;

        myFunc(node->left);
        myFunc(node->right);
        TreeNode* temp = node->left;
        node->left = node->right;
        node->right = temp;
        return;
    }
    TreeNode* invertTree(TreeNode* root) {
        myFunc(root);
        return root;
    }
*/
