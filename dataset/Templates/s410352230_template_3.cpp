template <typename T>
vector<T> dijkstra(vector<vector<pair<int, T>>> &G, int s, T INF) {
  vector<T> dist(G.size(), INF);

  using P = pair<int, T>;
  priority_queue<P, vector<P>, greater<P>> que;
  dist[s] = 0;
  que.emplace(s, dist[s]);
  while(!que.empty()) {
    int idx;
    T cost;
    tie(idx, cost) = que.top(); que.pop();
    if(dist[idx] < cost) continue;
    for(auto &e : G[idx]) {
      T next_cost = cost + e.second;
      if(dist[e.first] > next_cost) {
        dist[e.first] = next_cost;
        que.emplace(e.first, dist[e.first]);
      }