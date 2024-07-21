int main() {
  #ifdef LOCAL
  ifstream in("../../Atcoder/input.txt");
  cin.rdbuf(in.rdbuf());
  #endif

  ll N,M;
  cin >> N >> M;


  rep(i,M) {
    ll x,y;
    cin>>x>>y;
    x--;y--;
    G[x].push_back(y);
  }