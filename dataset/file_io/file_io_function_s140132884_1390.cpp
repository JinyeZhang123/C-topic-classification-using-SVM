int main() {
    //ifstream cin("A.in");
    //ofstream cout("A.out");
    int n, m;
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> n >> m;

    prec(n + 2 * m);

    int ans = solve(3 * m, n, m);

    int cur = 0;
    add(cur, solve(m, n, m));
    sub(cur, solve(m, n - 1, m));
    mul(cur, n);

    sub(ans, cur);

    cout << ans;

    return 0;
}