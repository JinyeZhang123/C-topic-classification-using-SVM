template <class T>
vector<pair<int, T>> zip_iv(const vector<T> &v) {
  int n = sz(v);
  vector<pair<int, T>> w(n);
  for (int i = 0; i < n; i++) w[i] = make_pair(i, v[i]);
  return w;
}