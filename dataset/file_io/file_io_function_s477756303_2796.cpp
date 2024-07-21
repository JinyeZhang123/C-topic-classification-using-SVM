int main() {
    #ifdef LOCAL
    ifstream in("../../Atcoder/input.txt");
    cin.rdbuf(in.rdbuf());
    #endif

    ll MOD = 1e9+7;

    cin>>H>>W;
    auto A = genarr<char>(H,W,'.');
    rep(i,H) {
      string s;
      cin>>s;
      rep(j,W) {
        A[i][j] = s[j];
      }