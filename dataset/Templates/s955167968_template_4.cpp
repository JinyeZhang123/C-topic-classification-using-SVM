template<typename ID_TYPE>
  bool TopologicalSort (vector<ID_TYPE>& sorted) { // 成功ならtrue 失敗(DAG出ない)ならfalseを返す
    used.clear();
    used.resize(V, false);
    deg.clear();
    deg.resize(V, 0);
    sorted.clear();

    for (const auto& v : G) 
      for (const auto& e : v)
        deg[e.to]++;

    queue<int> que;

    rep (i, V) if (deg[i] == 0) {used[i] = true; que.push(i);}