int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    factModInit();
    int N, M, K; cin >> N >> M >> K;
    ll res = M * powMod(M-1, N-1); res %= MOD;
    rep(i, K){
        ll mul = M;
        mul *= powMod(M-1, N-i-2); mul %= MOD;
        mul *= combMod(N-1, i+1); mul %= MOD;
        
        res += mul; res %= MOD;
    }