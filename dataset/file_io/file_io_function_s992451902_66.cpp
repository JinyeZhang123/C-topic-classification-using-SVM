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
  vector<long long> tele(N);
  vector<bool> itta(N);
  for(int i = 0; i < N; i++){
    cin >> tele[i];
    tele[i]--;
  }