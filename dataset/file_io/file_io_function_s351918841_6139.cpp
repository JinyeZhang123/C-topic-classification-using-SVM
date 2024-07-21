int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int n, a, b; cin >> n >> a >> b;
    factModInit();
    ll res = powMod(2, n); res %= MOD;
    res += MOD - combMod(n, a); res %= MOD;
    res += MOD - combMod(n, b); res %= MOD;
    res += MOD - 1; res %= MOD;
    cout << res << endl;
}