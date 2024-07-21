int main() {
#ifdef DEBUG
  ifstream ifs("in.txt");
  cin.rdbuf(ifs.rdbuf());
#endif
  int X;
  while (cin >> X) {
    int res = lcm(X, 360) / X;
    cout << res << endl;
  }