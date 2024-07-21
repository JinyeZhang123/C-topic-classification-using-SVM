int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout << setprecision(20) << fixed;
  /*
  ifstream in("input.txt");
  cin.rdbuf(in.rdbuf());
  //*/
  cin >> n;
  vector<pair<int, int>> p1, p2;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    int tmp = 0;
    int hituyo = 0;
    for (int j = 0; j < s.size(); j++) {
      if (s[j] == '(') {
        tmp++;
      }