int main() {
#ifdef DEBUG
  ifstream cin("in.txt");
#endif
  int N, A, B;
  while (cin >> N >> A >> B) {
    if (parity(A) == parity(B)) {
      cout << "NO" << endl;
      continue;
    }