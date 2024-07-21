int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // std::ifstream in("input.txt");
    // std::cin.rdbuf(in.rdbuf());
    ll n;
    cin >> n;
    vector<ll> idx(n);
    rep(i, n) {
        cin >> idx[i];
        idx[i]--;
    }