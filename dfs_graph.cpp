class Solution {
public:
    void dfs(int node, vector<int> adj[], int vis[], vector<int> &ls) {
        vis[node] = 1;
        ls.push_back(node);
        // Traversing neighbors
        for (auto it : adj[node]) {
            if (!vis[it]) {
                dfs(it, adj, vis, ls);
            }
        }
    }

    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Zero based indexing
        int start = 0;
        int vis[V] = {0};
        vector<int> ls;
        dfs(start, adj, vis, ls);
        return ls;
    }
};
