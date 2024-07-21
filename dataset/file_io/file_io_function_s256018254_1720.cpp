int main() {
#ifdef DEBUG
  ifstream ifs("in.txt");
  cin.rdbuf(ifs.rdbuf());
#endif
  initFact(200010);
  int B, W;
  while (cin >> B >> W) {
    ll p = 0, q = 0;
    for (int i = 0; i < B + W; i++) {
      if (i > 0) {
        p += choose(i - 1, B - 1) * power(inverse(2), i) % MOD;
        p %= MOD;
        q += choose(i - 1, W - 1) * power(inverse(2), i) % MOD;
        q %= MOD;
      }