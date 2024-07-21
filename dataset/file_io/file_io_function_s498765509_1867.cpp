int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    // ifstream cin(".in");

    cin >> n;
    if ((n & -n) == n) return cout << "No\n", 0;
    cout << "Yes\n";
    prt(1, 2); 
    prt(2, 3); 
    prt(3, n + 1); 
    prt(n + 1, n + 2); 
    prt(n + 2, n + 3);
    for (ll i = 4; i < n; i += 2) {
        prt(i, n + 1);
        prt(i + 1, n + 1);
        prt(i, n + i + 1);
        prt(i + 1, n + i);
    }