class Solution {
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        std::vector<bool> visited(n, false);
        std::vector<vector<int>> graph(n);
        int count = 0;

        // Building an adjacency list for undirected graph

        for(auto & edge: edges) {
            int u = edge[0];
            int v = edge[1];

            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        // Just printing out our newly build adjecency list
        for(int i = 0; i < graph.size(); i++) { 
            std:: cout<< "Node " << i << ": ";
            for(int edge: graph[i]) {
                std::cout<< " " <<edge;
            }
            std::cout<<std::endl;
        }

        for (int i = 0; i < n; i++) {
            if(!visited[i]) {
                dfs(i,graph,visited);
                count++;
            }
        }  
        return count;
    }
private:
    void dfs(int node, vector<vector<int>>& graph, vector<bool>& visited) {
        visited[node] = true;
        for(int neighbor : graph[node]) {      
            if(!visited[neighbor]) {
                dfs(neighbor,graph,visited);
            }    
        }
    }
    
};



