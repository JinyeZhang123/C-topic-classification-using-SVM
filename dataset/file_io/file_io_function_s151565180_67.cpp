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
  int ans = 0;
  for(int i = 0; i < N; i++){
    int a;
    cin >> a;
    while(a % 2 == 0){
      a /= 2;
      ans++;
    }