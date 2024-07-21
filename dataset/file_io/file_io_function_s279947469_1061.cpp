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
    ll S = X + Y;
    auto f = [&]() {
      if (S - Z < 0 || (S - Z) % 2 == 1) return -1ll;
      ll D = (S - Z) / 2;
      vector<int> bit(60, -1);
      int change = -1, last = -1;
      for (int i = bit.size() - 1; i >= 0; i--) {
        int x = (X >> i) & 1, z = (Z >> i) & 1, d = (D >> i) & 1;
        int c = 0;
        for (int a = 0; a < 2; a++) {
          if ((a & (z ^ a)) == d) {
            ++c;
            bit[i] = a;
          }