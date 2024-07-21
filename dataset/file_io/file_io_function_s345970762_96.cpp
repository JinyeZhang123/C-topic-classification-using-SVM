int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout << setprecision(20) << fixed;
  /*
  ifstream in("input.txt");
  cin.rdbuf(in.rdbuf());
  //*/
  int N, M, X;
  cin >> N >> M >> X;
  vector<int> c(N);
  vector<vector<int>> a(N, vector<int>(M));
  for(int i = 0; i < N; i++){
    cin >> c[i];
    for(int j = 0; j < M; j++){
      cin >> a[i][j];
    }