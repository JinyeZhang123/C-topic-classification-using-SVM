int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll h1, m1, h2, m2, k;
    cin >> h1 >> m1 >> h2 >> m2 >> k;
    ll t1 = h1 * 60 + m1;
    ll t2 = h2 * 60 + m2;
    cout << (t2 - t1 - k) << endl;
    return 0;
}