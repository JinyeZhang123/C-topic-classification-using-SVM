int main()
{
    ios::sync_with_stdio(false);

    int n, m;
    // ifstream cin("code.in");
    cin >> n >> m;
    cin >> (labels + 1);
    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        if (x != y) {
            v[y].push_back(x);
        }