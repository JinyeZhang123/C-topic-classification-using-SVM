int main() {
#ifdef DEBUG
  ifstream cin("in.txt");
#endif
  int N, Q;
  while (cin >> N >> Q) {
    vector<ll> A(N);
    for (ll& x : A) cin >> x;
    vector<int> X(Q), Y(Q);
    for (int i = 0; i < Q; i++) {
      cin >> X[i] >> Y[i];
      --X[i];
      --Y[i];
      if (X[i] > Y[i]) swap(X[i], Y[i]);
    }