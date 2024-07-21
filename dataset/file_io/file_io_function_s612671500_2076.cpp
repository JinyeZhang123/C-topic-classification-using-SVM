int main() {
#ifdef DEBUG
  ifstream ifs("in.txt");
  cin.rdbuf(ifs.rdbuf());
#endif
  initFact(300000);
  ll N, A, B, C;
  while (cin >> N >> A >> B >> C) {
    ll pA = A * inverse(100) % MOD;
    ll pB = B * inverse(100) % MOD;
    ll pC = C * inverse(100) % MOD;
    ll res = (f(pA, pB, N) + f(pB, pA, N)) % MOD * inverse((1 - pC + MOD) % MOD) % MOD;
    cout << res << endl;
  }