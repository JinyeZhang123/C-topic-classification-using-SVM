template <typename FROM, class... Args>
  void add_edge(FROM from, Args&&... arg) {
    G[from].emplace_back(arg...);
  }