int main() {
#ifdef DEBUG
  ifstream ifs("in.txt");
  cin.rdbuf(ifs.rdbuf());
#endif
  initFact(200010);
  int B, W;
  while (cin >> B >> W) {
    solve(B, W);
  }