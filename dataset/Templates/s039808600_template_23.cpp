template <class T, class S>
vector<pair<T, S>> zip(const vector<T> &v, const vector<S> &w) {
  int n = min(sz(v), sz(w));
  vector<pair<T, S>> x(n);
  for (int i = 0; i < n; i++) x[i] = make_pair(v[i], w[i]);
  return x;
}