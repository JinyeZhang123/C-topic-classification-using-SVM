int main() {
#ifdef DEBUG
  ifstream ifs("in.txt");
  cin.rdbuf(ifs.rdbuf());
#endif
  int N;
  while (cin >> N) {
    vector<ll> A(N);
    for (ll& x : A) cin >> x;
    vector<ll> xsum(N);
    xsum[0] = A[0];
    for (int i = 1; i < N; i++) xsum[i] = xsum[i - 1] ^ A[i];
    vector<ll> dp(N, 0ll);
    map<ll, ll> preVal;
    map<ll, ll> sumDp;
    map<ll, int> preZero;
    int zero = 0;
    for (int i = 0; i < N; i++) {
      ll X = xsum[i];
      if (X == 0) {
        ++zero;
        continue;
      }