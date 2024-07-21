int main() {
#ifdef DEBUG
  ifstream ifs("in.txt");
  cin.rdbuf(ifs.rdbuf());
#endif
  int N;
  while (cin >> N) {
    vector<P> A(N);
    for (int i = 0; i < N; i++) {
      cin >> A[i].fst;
      A[i].snd = i;
    }