int main() {
#ifdef DEBUG
  ifstream ifs("in.txt");
  cin.rdbuf(ifs.rdbuf());
#endif
  int N;
  while (cin >> N) {
    vector<ll> A(N);
    for (auto& x : A) cin >> x;
    ll X = A[0], Y = A[1], Z = 0;
    for (int i = 2; i < N; i++) Z ^= A[i];
    ll W = X + Y;
    // bit, carry, keep
    auto dp = make_v(bits, 2, 2, -1ll);
    dp[0][0][1] = 0;
    for (int b = 0; b < bits - 1; b++) {
      int a = (X >> b) & 1, w = (W >> b) & 1, z = (Z >> b) & 1;
      for (int carry = 0; carry < 2; carry++) {
        for (int keep = 0; keep < 2; keep++) {
          ll value = dp[b][carry][keep];
          if (value < 0) continue;
          for (int x = 0; x < 2; x++) {
            int ncarry = 0;
            int y = w - carry;
            if (y < 0) {
              ++ncarry;
              y += 2;
            }