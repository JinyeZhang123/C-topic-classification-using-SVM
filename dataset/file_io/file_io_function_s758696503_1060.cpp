int main() {
  // 入力
  int sx, sy;
  int cnt = 0;
  Cheeze cheeze;
  // ifstream ifs( "test.txt" );
  cin >> h >> w >> n;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      char cel;
      cin >> cel;
      if (cel == 'X') {
        field[i][j] = -1;
      }