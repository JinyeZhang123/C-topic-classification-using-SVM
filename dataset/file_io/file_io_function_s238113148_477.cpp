int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll w, h;
    cin >> w >> h;
    vector<pair<ll, ll>> v;
    rep(i, w) {
        ll tmp;
        cin >> tmp;
        v.push_back(make_pair(tmp, 0));
    }