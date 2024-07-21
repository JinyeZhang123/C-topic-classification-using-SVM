int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout << setprecision(20) << fixed;
  /*
  ifstream in("input.txt");
  cin.rdbuf(in.rdbuf());
  //*/
  string S, T;
  cin >> S >> T;
  for(int i = 0; i < S.size(); i++){
    if(S == T){
      cout << "Yes" <<endl;
      return 0;
    }