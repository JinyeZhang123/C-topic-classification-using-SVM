int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout << setprecision(20) << fixed;
  /*
  ifstream in("input.txt");
  cin.rdbuf(in.rdbuf());
  //*/
  int N, K;
  cin >> N >> K;
  unordered_set<char> s;
  for(int i = 0; i < K; i++){
    char d;
    cin >> d;
    s.insert(d);
  }