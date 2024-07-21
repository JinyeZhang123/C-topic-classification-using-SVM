int main(){


  cin.tie(0);
  ios::sync_with_stdio(false);

  // ifstream in("1_048.txt");
  // cin.rdbuf(in.rdbuf());

  
  int n, m;
  cin >> n >> m;

  vector<ll> a(n);
  rep(i, n) cin >> a[i];

  vector<vector<int>> g(n);

  UnionFind uf(n);

  rep(i, m){
    int x, y;
    cin >> x >> y;
    g[x].push_back(y);
    g[y].push_back(x);

    uf.merge(x, y);
  }