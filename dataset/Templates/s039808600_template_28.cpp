template <class T, class S>
void zip_rsort(vector<T> &v, vector<S> &w) {
  vector<pair<T, S>> x = zip(v, w);
  RSORT(x);
  int n = sz(x);
  for (int i = 0; i < n; i++) {
    v[i] = x[i].first;
    w[i] = x[i].second;
  }