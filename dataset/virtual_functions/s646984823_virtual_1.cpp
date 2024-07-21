virtual void add_edge(int x, int y)
  {
    g[x].push_back(y);
    g[y].push_back(x);
  }