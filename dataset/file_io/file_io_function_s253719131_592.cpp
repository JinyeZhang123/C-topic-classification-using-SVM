int main(){

  //std::ifstream in ("input.txt");
  //std::cin.rdbuf(in.rdbuf());
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    string a, b;
    cin >> a >> b;
    cout << lcs(a, b) << endl;
  }