int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout << setprecision(20) << fixed;
  /*
     ifstream in("input.txt");
     cin.rdbuf(in.rdbuf());
  //*/
  long long N, K;
  cin >> N >> K;
  vector<vector<int>> dl(60, vector<int>(N));
  for(int i = 0; i < N; i++){
    cin >> dl[0][i];
    dl[0][i]--;
  }