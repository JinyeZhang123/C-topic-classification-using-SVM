template <class T, class S>
vector<S> unzip_second(const vector<pair<T, S>> &v) {
  int n = sz(v);
  vector<S> w(n);
  for (int i = 0; i < n; i++) w[i] = v[i].second;
  return w;
}