template <typename T> vector<T> dijkstra(vector<vector<Edge<T>>> tree, T src) {
  size_t V = tree.size();
  vector<T> dist = vector<T>(V, INF);
  priority_queue<Edge<T>, vector<Edge<T>>, greater<Edge<T>>> queue;

  dist[src] = 0;
  queue.push(Edge<T>(src, 0));
  while (!queue.empty()) {
    Edge<T> t = queue.top();
    queue.pop();
    int v = t.dst, cost = t.cost;

    if (dist[v] < cost) {
      continue;
    }