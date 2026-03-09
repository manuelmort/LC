class Solution {
public:
    void detectCycle(
private:
    bool dfs(int node, int parent, vector<vector<int>>& graph, vector<bool>& visited) {
        visited[node] = true;
        
        for(int neighbor: graph[node]) {
            if(!visited[neighbor]) {
                if(dfs(neighbor,node,graph,visited)){
                    return true; 
                }
            }
            if(neighbor != parent){
                return true;
            }
        }
        return false;

    }




};
