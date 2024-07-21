int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
 
    factModInit();
    int K; string S; cin >> K >> S;
    int s = (int)(S.size());
    
    ll res = 0;
    rep(i, K+1){
        ll sub = combMod(s-1+i, s-1);
        sub *= powMod(25, i); sub %= MOD;
        sub *= powMod(26, K-i); sub %= MOD;

        res += sub; res %= MOD;
    }