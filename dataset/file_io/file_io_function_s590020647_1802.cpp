int main() {
#ifdef DEBUG
  ifstream ifs("in.txt");
  cin.rdbuf(ifs.rdbuf());
#endif
  int N;
  while (cin >> N) {
    vector<P> ps(N);
    for (auto& p : ps) {
      double x, y;
      cin >> x >> y;
      p = P(x, y);
    }