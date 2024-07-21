int main() {
#ifdef DEBUG
  ifstream ifs("in.txt");
  cin.rdbuf(ifs.rdbuf());
#endif
  int K;
  while (cin >> S >> K) {
    memset(dp, -1, sizeof(dp));
    cout << solve(0, S.size() - 1, K) << endl;
  }