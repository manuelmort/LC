class Solution {

public:
    void undirected_graph(int n, vector<vector<int>>& edges, int start){
        vector<vector<int>> graph(n);
        
        for(auto &edge: edges){
            int u = edge[0];
            int v = edge[1];
            
            graph[u].push_back[v];
            graph[v].push_back[u];
        }
        dfs(start,graph,visited);
    }    
private:
  void dfs(int node, vector<vector<int>> & graph, vector<bool>& visited){
    visited[node];
    for(int neighbor : graph[node]){
        if(!visited[neighbor])  {
            dfs(neighbor, graph, visited)
        }
    }
       
  }
 
};
