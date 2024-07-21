int main() {
#ifdef DEBUG
  ifstream ifs("in.txt");
  cin.rdbuf(ifs.rdbuf());
#endif
  ll N, X, D;
  while (cin >> N >> X >> D) {
    cout << solve(N, X, D) << endl;
  }