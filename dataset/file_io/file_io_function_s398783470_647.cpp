int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout << setprecision(20) << fixed;
  /*
  ifstream in("input.txt");
  cin.rdbuf(in.rdbuf());
  //*/
  cin >> N >> M >> X;
  for(int i = 0; i < N; i++){
    cin >> cost[i];
    for(int j = 0; j < M; j++){
      cin >> kouka[i][j];
    }