class Solution {
public:
    void solve(int n, vector<vector<int>> & edges, int start) {
        vector<vector<int>> graph(n);
        
        for(auto& edge: edges){
            int u = edge[0];
            int v = edge[1];

            graph[u].push_back(v);
            graph[v].push_back(u);

        }
        vector<bool> visited(n,false);
        
        queue<int> q;
        q.push(start);
        visited[start] = true;
        
        while(!q.empty()){
            int node = q.front();
            q.pop();

            for(int neighbor: graph[node]){
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }

        }
        
        
    }
private:
    
 
};
