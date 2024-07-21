int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout << setprecision(20) << fixed;
  /*
  ifstream in("input.txt");
  cin.rdbuf(in.rdbuf());
  //*/
  long long N, M, K;
  cin >> N >> M >> K;
  vector<long long> vec(N+1);// i個のブロックの塊をM色で隣合う色が異なるように塗る数
  vec[0] = 0;
  vec[1] = M;
  COMinit();
  for(int i = 2; i <= N; i++){
    vec[i] = vec[i-1] * (M-1) % MOD;
    vec[i] %= MOD;
  }