int main() {
#ifdef DEBUG
  ifstream ifs("in.txt");
  cin.rdbuf(ifs.rdbuf());
#endif
  initFact(MOD - 1);
  int Q;
  while (cin >> Q) {
    for (int q = 0; q < Q; q++) {
      ll x, d, n;
      cin >> x >> d >> n;
      cout << f(x, d, n) << endl;
    }