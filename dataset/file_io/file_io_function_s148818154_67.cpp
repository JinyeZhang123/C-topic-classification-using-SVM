int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout << setprecision(20) << fixed;
  /*
  ifstream in("input.txt");
  cin.rdbuf(in.rdbuf());
  //*/
  long long N, M;
  cin >> N >> M;
  vector<pair<long long, long long>> drink;
  for(int i = 0; i < N; i++){
    int a, b;
    cin >> a >> b;
    drink.emplace_back(a, b);
  }