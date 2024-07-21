int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout << setprecision(20) << fixed;
  /*
  ifstream in("input.txt");
  cin.rdbuf(in.rdbuf());
  //*/
  int X, N;
  cin >> X >> N;
  set<int> p;
  for(int i = 0; i < N; i++){
    int x;
    cin >> x;
    p.insert(x);
  }