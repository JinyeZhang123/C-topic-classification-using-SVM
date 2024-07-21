template <typename T, typename U, typename V>
void tupleSort(vector<T> &v1, vector<U> &v2, vector<V> &v3) {
  int n = v1.size();
  vector<tuple<T, U, V>> t(n);
  for (int i = 0; i < n; i++) {
    t[i] = tuple<T, U, V>(v1[i], v2[i], v3[i]);
  }