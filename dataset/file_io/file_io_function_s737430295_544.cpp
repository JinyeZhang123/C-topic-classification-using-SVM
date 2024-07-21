int main() {
  // ifstream ifs( "test.txt" );

  while (true) {
    // 入力
    cin >> h >> w;
    if (!(h | w))
      break;
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        cin >> orchard[i][j];
        counted[i][j] = false;
      }