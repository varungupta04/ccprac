class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> zig;
        
        if(root == NULL)
        {
            return zig;
        }

        queue<TreeNode*> q;
        q.push(root);
        bool cont = false; 

        while(!q.empty())
        {
            int size = q.size();
            vector<int> level;
            stack<int> rev;

            for(int i = 0; i<size; i++)
            {
                TreeNode* node = q.front();
                q.pop();
                if(cont)
                {
                    rev.push(node->val);
                }
                else
                {
                    level.push_back(node->val);
                }

                if(node->left){q.push(node->left);}
                if(node->right){q.push(node->right);}
            }

            while (!rev.empty())
            {
               int temp = rev.top();
                rev.pop();
                level.push_back(temp);
            }

            cont = !cont;
            zig.push_back(level);
        }

        return zig;
    }
};

// we make a queue that has all the elements of the nodes and then we have and push 
//but if we need to read the other way we get out boolean value and push it into stack and then add to level and then 
//then push to zig