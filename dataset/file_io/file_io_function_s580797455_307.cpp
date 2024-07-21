int main() {
  // ofstream ofstr(".¥¥test.txt" );
  // streambuf* strbuf;
  // strbuf = std::cout.rdbuf( ofstr.rdbuf() );

  int A,B;
  cin >> A >> B;
  int s = min(A,B), l = max(A,B);
  vector<vector<char>> ans(100, vector<char>(100,'.'));
  s--;

  rep(i,25){
    rep(j,25) {
      if (l>0) {
        l--;
        rep(x,3)rep(y,3) ans[i*4+x][j*4+y] = '#';
        if (s>0) {s--;ans[i*4+1][j*4+1]='.';}