class Solution {
public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Queue for FIFO
        queue<int> q;
        // Visited array
        vector<int> vis(V, 0);
        vis[0] = 1;
        q.push(0);
        // BFS list
        vector<int> bfs;

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            bfs.push_back(node);

            for (auto it : adj[node]) {
                if (!vis[it]) {
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }

        return bfs;
    }
};
