int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout << setprecision(20) << fixed;
  /*
  ifstream in("input.txt");
  cin.rdbuf(in.rdbuf());
  //*/
  int N, T;
  cin >> N >> T;
  int ans = INF;
  for(int i = 0; i < N; i++){
    int c, t;
    cin >> c >> t;
    if(t <= T && c < ans){
      ans = c;
    }