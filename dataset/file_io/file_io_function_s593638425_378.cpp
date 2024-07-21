int main() {
  // ifstream cin("../test.txt");
  while (true) {
    int n,s;
    cin >> n >> s;
    if (!(n|s)) break;

    int res = cnt_sum_s(n, -1, s, 0);

    cout << res << endl;
  }