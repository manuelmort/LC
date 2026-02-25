class Solution {
// This solution was done with the help of AI for being stuck on it 2hours+, cycle detection learned
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> graph(numCourses);

       // Build directed graph: b -> a
        for (auto& p : prerequisites) {
            int a = p[0];
            int b = p[1];
            graph[b].push_back(a);
        }

        vector<int> state(numCourses, 0);

        for (int i = 0; i < numCourses; i++) {
            if (state[i] == 0) {
                if (dfs(i, graph, state)) {
                    return false; // cycle detected
                }
            }
        }

        return true;
    }

private:
    bool dfs(int node, vector<vector<int>>& graph, vector<int>& state) {
        state[node] = 1; // visiting

        for (int neighbor : graph[node]) {

            if (state[neighbor] == 1) {
                return true; // cycle!
            }

            if (state[neighbor] == 0) {
                if (dfs(neighbor, graph, state)) {
                    return true;
                }
            }
        }

        state[node] = 2; // done
        return false;
    }
};
