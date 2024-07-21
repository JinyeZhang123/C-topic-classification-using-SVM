signed main()
{
  // string filename; cin >> filename;
  // ifstream in(filename);
  // cin.rdbuf(in.rdbuf());

  int K; cin >> K;
  int x = K / 50, y = K % 50;
  vector<int> a(50, 49 + x - y);
  rep(i, 0, y) {
    a[i] += 51;
  }