template<typename ID_TYPE>
  bool TopologicalSort (vector<ID_TYPE>& sorted) { // 成功ならtrue 失敗(DAG出ない)ならfalseを返す
    used.clear();
    used.resize(V,false);
    is_ancetor.clear();
    is_ancetor.resize(V, false);

    sorted.clear();

    rep (i,V) {
      if(!DFSForTopologicalSort(i, sorted)) {
        return false;
      }