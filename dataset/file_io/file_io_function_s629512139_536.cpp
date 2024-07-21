int main() {
    // ifstream cin("tst.in");
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    cin >> n >> q;
    for (int i = 1; i <= n; i++)
        cin >> c[i];

    for (int i = 1; i <= q; i++)
        cin >> a[i].fi >> a[i].se;

    int cnt = 0;
    int st = 1, dr = n, mid;
    while (st <= dr) {
        mid = (st + dr) / 2;
        if (check(mid, 0))
            st = mid + 1;
        else dr = mid - 1;
    }