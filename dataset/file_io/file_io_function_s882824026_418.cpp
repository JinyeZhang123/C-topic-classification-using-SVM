int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // std::ifstream in("input.txt");
    // std::cin.rdbuf(in.rdbuf());
    ll n;
    cin >> n;
    vector<ll> t(n, 0), v(n, 0);
    rep(i, n) cin >> t[i], t[i] *= 2;
    rep(i, n) cin >> v[i];
    ll tt = accumulate(all(t), 0LL);
    vector<double> speed(tt + 1, 0);
    ll idx = 0, sumt = 0;
    reps(i, 1, tt) {
        if (i > (sumt + t[idx])) {
            sumt += t[idx];
            idx++;
        }