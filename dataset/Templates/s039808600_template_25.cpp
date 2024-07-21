template <class T, class S>
vector<T> unzip_first(const vector<pair<T, S>> &v) {
  int n = sz(v);
  vector<T> w(n);
  for (int i = 0; i < n; i++) w[i] = v[i].first;
  return w;
}