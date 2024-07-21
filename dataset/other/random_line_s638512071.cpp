    return x == parent[x] ? x : parent[x] = find(parent[x]);
