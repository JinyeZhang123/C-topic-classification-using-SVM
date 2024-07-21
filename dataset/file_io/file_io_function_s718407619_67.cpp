int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout << setprecision(20) << fixed;
  /*
  ifstream in("input.txt");
  cin.rdbuf(in.rdbuf());
  //*/
  string S;
  cin >> S;
  bool flag = true;
  int cnt = 0;
  for (int i = 0; i < S.size(); i++) {
    if (i == 0) {
      if (S[i] != 'A') {
        flag = false;
      }