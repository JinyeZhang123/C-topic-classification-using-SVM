template <typename T>
struct Graph_ {
  int n;
  vector<vector<T> > d;
  vector<vector<int> > path;
  Graph_(int ns) {
    n = ns;
    d = vector<vector<T> >(n, vector<T>(n, numeric_limits<T>::max() / 10));
    path = vector<vector<int> >(n, vector<int>(n, -1));
    for(int i = 0; i < n; i++)d[i][i] = 0;
  }