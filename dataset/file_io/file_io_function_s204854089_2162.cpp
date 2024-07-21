int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    // ifstream cin(".in");

    cin >> n;
    ll x = query(0);
    solve(0, n, x, x);

}