class Solution {
public:

    //map for storing from new to clone 
    unordered_map<Node*, Node*> mp;

    void dfs(Node* node, Node* clone_node)
    {
        for(auto n : node->neighbors)
        {
            if(mp.find(n) == mp.end())
            {
                Node* clone = new Node(n->val);
                mp[n] = clone;
                clone_node->neighbors.push_back(clone);

                dfs(n , clone);
            }
            else
            {
                clone_node->neighbors.push_back(mp[n]);
            }
        }
    }

    Node* cloneGraph(Node* node) 
    {
        if(!node)
        {
            return NULL;
        }

        //clone the first node
        Node* clone_node = new Node(node->val);
        mp[node] = clone_node;
        //clone neighbor -> DFs
        dfs(node, clone_node);

        return clone_node;
    }
};

