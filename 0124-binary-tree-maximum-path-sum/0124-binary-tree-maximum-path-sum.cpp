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
int maxSum=INT_MIN;
int sum(TreeNode* root){
    if (root == NULL) {
            return 0;
        }

    int ls=sum(root->left);
    int rs=sum(root->right);
    int left_right_dono_maxsumhain=ls+rs+root->val;
    int left_right_koisaek=max(ls,rs)+root->val;
    int dono_me_sekoi_sa_nhi=root->val;
    maxSum=max({maxSum,left_right_dono_maxsumhain,left_right_koisaek , dono_me_sekoi_sa_nhi});
    return max(left_right_koisaek,dono_me_sekoi_sa_nhi);
}
    int maxPathSum(TreeNode* root) {
        
        sum(root);
        return maxSum;
        
    }
};