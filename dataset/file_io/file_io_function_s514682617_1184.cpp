int main() {
#if 0
    ifstream cin("A.in");
    ofstream cout("A.out");
#endif
    int i, j, n, a, b;
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> n >> a >> b;
    vector <int> pos(n + 1);
    for(i = 1; i <= n; i++) {
        int x;
        cin >> x;
        pos[x] = i;
    }