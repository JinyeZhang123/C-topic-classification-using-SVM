int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // std::ifstream in("input.txt");
    // std::cin.rdbuf(in.rdbuf());
    vector<ll> n(4);
    rep(i, 4) cin >> n[i];
    sort(all(n));
    if ((n[0] == 1) && (n[1] == 4) && (n[2] == 7) && (n[3] == 9)) {
        cout << "YES" << endl;
    }