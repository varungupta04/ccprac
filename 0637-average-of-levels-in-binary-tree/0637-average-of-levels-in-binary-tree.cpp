class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> avgList;
        if (!root) return avgList;

        queue<TreeNode*> levelQueue;
        levelQueue.push(root);

        while (!levelQueue.empty()) {
            double sum = 0;
            int nodes = levelQueue.size();

            for (int i = 0; i < nodes; i++) {
                TreeNode* node = levelQueue.front();
                levelQueue.pop();
                sum += node->val;

                if (node->left) levelQueue.push(node->left);
                if (node->right) levelQueue.push(node->right);
            }

            avgList.push_back(sum / nodes);
        }

        return avgList;
    }
};