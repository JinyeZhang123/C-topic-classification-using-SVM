int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    const ll inf = LONG_LONG_MAX / 2 - 1;
    ll N, M, R;
    cin >> N >> M >> R;
    vector<ll> r(R);
    rep(i, R) {
        cin >> r[i];
        r[i]--;
    }