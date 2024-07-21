template<typename ID_TYPE>
  bool topological_sort (vector<ID_TYPE> &sorted) { // 成功ならtrue 失敗(DAG出ない)ならfalseを返す
    used.clear();
    used.resize(V,false);

    sorted.clear();

    rep (i,V) {
      if (!used[i]) dfs(i,sorted);
    }