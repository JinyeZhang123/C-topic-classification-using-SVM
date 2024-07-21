signed main()
{
  // string filename; cin >> filename;
  // ifstream in(filename);
  // cin.rdbuf(in.rdbuf());

  int N; cin >> N;
  vector<int> x(N), y(N);
  rep(i, 0, N) {
    cin >> x[i] >> y[i];
  }