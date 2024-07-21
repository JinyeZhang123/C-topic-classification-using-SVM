	void dfs(int cu) { vis[cu] = 1; for (int i = 0; i<E[cu].size(); i++) if (!vis[E[cu][i]]) dfs(E[cu][i]); NUM.push_back(cu); }
