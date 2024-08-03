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

    int leftHeight(TreeNode* root) {
        if(!root)
            return 0;
        
        int lh = 0;
        TreeNode* temp = root;
        while(temp) {
            temp = temp->left;
            lh++;
        }
        return lh;
    }

    int rightHeight(TreeNode* root) {
        if(!root)
            return 0;
        
        int rh = 0;
        TreeNode* temp = root;
        while(temp) {
            temp = temp->right;
            rh++;
        }
        return rh;
    }

    int countNodes(TreeNode* root) {
        if(root == NULL)
        {
            return 0;
        }

        int l = 0; 
        int r = 0; 

        l = leftHeight(root);
        r = rightHeight(root);

        if(l == r)
        {
            return pow(2,l) - 1;
        }

        return countNodes(root->left) + countNodes(root->right) + 1;


    }
};


//threr is a property of complete binary tree the property states that if the tree is truly complete the nodes are 2^h - 1 : (here h is the height of the binary tree)