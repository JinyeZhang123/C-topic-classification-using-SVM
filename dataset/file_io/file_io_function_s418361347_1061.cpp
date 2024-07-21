int main() {
#ifdef DEBUG
  ifstream ifs("in.txt");
  cin.rdbuf(ifs.rdbuf());
#endif
  int P;
  while (cin >> P) {
    vector<int> A(P);
    for (int& x : A) cin >> x;
    vector<int> B(P);
    B[0] = A[0];
    for (int i = P - 1; i >= 1; i--) {
      int sum = 0;
      for (int x = 0; x < P; x++) {
        sum = (sum + A[x]) % P;
        A[x] = A[x] * x % P;
      }