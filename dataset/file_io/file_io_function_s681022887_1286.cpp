int main() {
#if 0
    ifstream cin("A.in");
    ofstream cout("A.out");
#endif
    int i, j, n, m;
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> n >> m;
    for(i = 1; i <= n; i++) {
        cin >> mat[i] + 1;
        for(j = 1; j <= m; j++) {
            sp[i][j] = sp[i - 1][j] + sp[i][j - 1] - sp[i - 1][j - 1] + (mat[i][j] == '.');
        }