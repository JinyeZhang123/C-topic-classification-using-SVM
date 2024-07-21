int main() {
  // ifstream cin("../test.txt");
  while (true) {
    cin >> m >> n;
    if (!(m|n)) break;
    int t;
    for (int i = 0; i < n+2; i++) {
      for (int j = 0; j < m+2; j++) {
        a[i][j] = false;
        v[i][j] = false;
      }