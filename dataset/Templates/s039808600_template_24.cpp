template <class T, class S>
pair<vector<T>, vector<S>> unzip(const vector<pair<T, S>> &v) {
  int n = sz(v);
  auto w = make_pair(vector<T>(n), vector<S>(n));
  for (int i = 0; i < n; i++) {
    w.first[i] = v[i].first;
    w.second[i] = v[i].second;
  }