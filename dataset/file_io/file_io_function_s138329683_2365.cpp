int main() {
    #ifdef LOCAL
    ifstream in("../../Atcoder/input.txt");
    cin.rdbuf(in.rdbuf());
    #endif

    ll N,M,L;
    cin>>N>>M>>L;

    auto dp = genarr<ll>(N+10,N+10,INF);
    auto dp2 = genarr<ll>(N+10,N+10,INF);

      
    rep(i,N+10) {
      dp[i][i] = 0;
      dp2[i][i] = 0;
    }