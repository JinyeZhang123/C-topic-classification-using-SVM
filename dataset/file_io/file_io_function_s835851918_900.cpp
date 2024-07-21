int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    cin >> n;
    xy.resize(n);
    rep(i, n) cin >> xy[i].first >> xy[i].second;
    double l = 0, r = 1000;
    rep(i, 80) {
        double lm = (l * 2 + r) / 3;
        double hm = (l + 2 * r) / 3;
        if (g(lm) > g(hm)) l = lm;
        else r = hm;
    }