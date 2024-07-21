template <typename T, typename U>
void pairSort(vector<T> &v1, vector<U> &v2, bool rev = false) {
  int n = v1.size();
  vector<pair<T, U>> p(n);
  for (int i = 0; i < n; i++) {
    p[i] = pair<T, U>(v1[i], v2[i]);
  }