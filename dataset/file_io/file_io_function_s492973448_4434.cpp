int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
 
    factModInit();
    int N, M; cin >> N >> M;
    
    ll res = powMod(permMod(M, N), 2);
    rep(i, N){
        ll cnt = permMod(M, N);
        cnt *= combMod(N, i+1); cnt %= MOD;
        cnt *= permMod(M-(i+1), N-(i+1)); cnt %= MOD;
        
        res += i%2 == 0 ? MOD - cnt : cnt;
        res %= MOD;
    }