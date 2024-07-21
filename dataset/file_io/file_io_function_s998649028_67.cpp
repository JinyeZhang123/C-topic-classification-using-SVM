int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout << setprecision(20) << fixed;
  /*
  ifstream in("input.txt");
  cin.rdbuf(in.rdbuf());
  //*/
  int A, B, C, K;
  cin >> A >> B >> C >> K;
  int sum = 0;
  if(K > A){
    sum += A;
    K -= A;
  }