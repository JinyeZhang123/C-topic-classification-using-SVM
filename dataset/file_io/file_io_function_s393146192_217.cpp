int main(){
#ifdef MYLOCAL
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());
#endif
    int N; cin >> N;
    vector<ll> s(N);
    for (int i = 0; i < N; ++i) cin >> s[i];

    ll res = 0;
    for (int p = 1; p <= N-1; ++p) {
        if ((N-1) % p == 0) {
            ll tmp = 0;
            ll cur = 0;
            int i = 0, j = N-1;
            for (; i < j; i += p, j -= p) {
                cur += s[i] + s[j];
                tmp = max(tmp, cur);
            }