class Solution {
public:
    void bfs_skeleton(int n, vector<vector<int>> edges, int start){
        
        //Creating adjacency list
        vector<vector<int>>& graph(n);
        
        for(auto& edge: edges){
            int v = edge[0];
            int u = edge[1];
        
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        vector<bool> visited(n, false);
       
        vector<int> q; 
        q.push(n);
        visited[start] = true;

        while(!q.empty()) {
            int node = q.front();
            q.pop()
        
            for(int neighbor: graph[node]){
                if(!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
        
    }
}
private:
}
