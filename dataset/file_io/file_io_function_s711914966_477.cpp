int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll ai, ao, at, aj, al, as, az;
    cin >> ai >> ao >> at >> aj >> al >> as >> az;
    ll ans = 0;
    if ((ai >= 1) && (aj >= 1) && (al >= 1)) {
        ans = 3;
        ans += (ai - 1) / 2 * 2;
        ans += (aj - 1) / 2 * 2;
        ans += (al - 1) / 2 * 2;
        ans += ao;
    }