#include <iostream>
#include <vector>

using namespace std;

void dfs(int node, vector<vector<int>>& graph, vector<bool>& visited) {
  // If node isn't visited we will go through this function recursively  
  visited[node] = true;
  
  for(int neighbor: graph[node]) {
    std::cout<< "Node: " <<  node << " neighbor: " << neighbor << std::endl;
    if(!visited[neighbor]) {
      dfs(neighbor, graph, visited);
    }
  }


}
int main() {
  int n = 5;  // number of nodes
  vector<vector<int>> graph(n);
  
  // 1) Initializing Adjacency List 
  graph[0] = {1}; 
  graph[1] = {0,2};
  graph[2] = {1};
  graph[3] = {4};
  graph[4] = {3};

  // 2) Intializing visiting vector
  std::vector<bool> visited(n, false);
   
  // 3) Traverse 
  int components = 0; 
  
  for(int i = 0; i < n; i++) {
    if(!visited[n]) {
      dfs(i,graph,visited); 
      components++;
    }
  }

  std::cout << "Connected components: " << components << std::endl;
  return 0;
}


