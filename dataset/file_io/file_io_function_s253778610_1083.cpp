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
    if ((S - Z) < 0 || (S - Z) % 2 == 1) {
      cout << -1 << endl;
      continue;
    }