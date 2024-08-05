class Solution {
public:
    void flatten(TreeNode* root) {
        while(root)
        {
            if(!root->left)
            {
                root=root->right;
            }
            else
            {
                TreeNode * current= root->left;
                while(current->right)
                {
                    current = current -> right ;
                }
                current -> right =root->right;
                root->right = root->left;
                root->left=nullptr;
                root=root->right;                
            }

        }
        
    }
};