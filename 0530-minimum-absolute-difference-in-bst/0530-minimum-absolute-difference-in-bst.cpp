class Solution {
public:
    int mini = INT_MAX;

    void inorder(TreeNode* root, TreeNode* &prev)
    {
        if(!root)
        {
            return;
        }

        inorder(root->left, prev);

        if(prev!=NULL)
        {
            mini = min(mini, root->val-prev->val);
        }

        prev = root;

        inorder(root->right, prev);


    }
    int getMinimumDifference(TreeNode* root) {

        if(root == NULL)
        {
            return 0;
        }

        TreeNode* prev = NULL;

        inorder(root, prev);

        return mini; 
    }
};

