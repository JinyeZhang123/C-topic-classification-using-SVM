int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout << setprecision(20) << fixed;
  /*
  ifstream in("input.txt");
  cin.rdbuf(in.rdbuf());
  //*/
  int K;
  string S;
  cin >> K >> S;
  if(S.size() <= K){
    cout << S <<endl;
  }