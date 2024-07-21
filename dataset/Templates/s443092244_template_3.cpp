template <typename FROM, class... Args>
  void AddEdge(FROM from, Args&&... arg) {
    G[from].emplace_back(arg...);
  }