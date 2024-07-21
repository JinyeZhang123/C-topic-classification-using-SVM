int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout << setprecision(20) << fixed;
  /*
  ifstream in("input.txt");
  cin.rdbuf(in.rdbuf());
  //*/
  int N;
  cin >> N;
  long long ans = 1;
  vector<long long> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
    if (A[i] == 0) {
      cout << 0 << endl;
      return 0;
    }