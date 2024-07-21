template<typename T>
struct floyd_warshall {
  const int n;
  const T inf;
  vector<vector<T>> dst;
  void cal () {
    for (int k = 0; k < n; k++) {
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
          if (dst[i][k] != inf && dst[k][j] != inf) {
            cmn(dst[i][j], dst[i][k] + dst[k][j]);
          }