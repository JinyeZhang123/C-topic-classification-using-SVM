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
  char one = S[S.size()-1];
  if(one == '2' || one == '4' || one == '5'|| one == '7'|| one == '9'){
    cout << "hon" <<endl;
  }