# 1971
class Solution(object):
    def validPath(self, n, edges, source, destination):
        """
        :type n: int
        :type edges: List[List[int]]
        :type source: int
        :type destination: int
        :rtype: bool
        """
        graph = []
        for i in range(n):
            graph.append([])
        for u,v in edges:
           graph[u].append(v)
           graph[v].append(u)

        
        visited = set()

        return self.dfs(source, destination, graph, visited)

       
    def dfs(self,node,destination,graph, visited):
        if node in visited:
            return
        if(node == destination):
            return True
        visited.add(node)
        for neighbor in graph[node]:
            if self.dfs(neighbor,destination,graph,visited):
                return True
        return False

