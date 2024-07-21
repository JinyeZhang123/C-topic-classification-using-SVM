int main() {
  // ifstream cin("../test.txt");
  int n;
  while (true) {
    cin >> n;
    if (!n) break;
    vector<int> a(n);
    vector<int> sub_sum(n+1); // a[0] + ... + a[i]
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }