graph = {
        "A": ["B","C"],
        "B": ["D", "E"],
        "C": ["F"],
        "D": [],
        "E": [],
        "F": []
        }


visited = set()

def dfs(node):
    if node in visited:
        return
    
    visited.add(node)
    print(node)

    for neighbor in graph[node]:
       dfs(neighbor)

dfs("A")
    
