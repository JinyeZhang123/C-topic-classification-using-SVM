int main() {
  // ifstream cin("../test.txt");
  while (true) {
    int N, M;
    cin >> N >> M;
    if (!(N | M)) break;
    // dl, dsの初期化
    int dl[MAX_N][MAX_N]; // 陸路の最短距離
    int ds[MAX_N][MAX_N]; // 海路の最短距離
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        if (i == j) {
          dl[i][i] = 0;
          ds[i][i] = 0;
        }