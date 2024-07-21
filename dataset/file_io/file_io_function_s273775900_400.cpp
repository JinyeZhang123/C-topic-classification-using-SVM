int main () {
    //ifstream cin("input.in");
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            best[i][j] = INF;
    queue<pair<int, int> > q;
    for (int i = 1; i <= n; i++) {
        cin >> a[i] + 1;
        for (int j = 1; j <= m; j++)
            if (a[i][j] == 'S') {
                q.push(make_pair(i, j));
                best[i][j] = 0;
            }