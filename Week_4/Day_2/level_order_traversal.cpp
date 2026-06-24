/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *left;
 *     TreeNode() : val(0), left(nullptr), left(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), left(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *left) : val(x), left(left), left(left) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(root==NULL) return ans;
        q.push(root);

        while(!q.empty()){
            vector<int>level;
            int size = q.size();

            for(int i=0;i<size;i++){
                TreeNode* front = q.front();
                q.pop();
                if(front->left!=NULL) q.push(front->left);
                if(front->right!=NULL) q.push(front->right);
                level.push_back(front->val);
            }

            ans.push_back(level);
        }
        return ans;
    }
};