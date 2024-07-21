int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
 
    int N, K; cin >> N >> K;
    ll sum = 0, p[N];
    ll res = 0;
    rep(i, N){
        cin >> p[i];
        if(i < K) sum += p[i] + 1ll;
        else sum += p[i] - p[i-K];
        chmax(res, sum);
    }