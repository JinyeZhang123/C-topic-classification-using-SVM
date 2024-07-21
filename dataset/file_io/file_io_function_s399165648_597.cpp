int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // ifstream cin ("2170_input.txt");
  int N, Q;
  while (1) {
    cin >> N >> Q;
    if (!(N | Q)) break;
    init(N);
    int a, i;
    for (i = 1; i < N; i++) {
      cin >> a;
      par[i] = a - 1;
    }