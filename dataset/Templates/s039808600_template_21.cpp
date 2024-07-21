template <class T>
vector<pair<T, int>> zip_vi(const vector<T> &v) {
  int n = sz(v);
  vector<pair<T, int>> w(n);
  for (int i = 0; i < n; i++) w[i] = make_pair(v[i], i);
  return w;
}