int main() {
#if 0
    ifstream cin("A.in");
    ofstream cout("A.out");
#endif
    int i, n, x;
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> n >> x;
    vector <int> b(n), l(n), u(n);
    for(i = 0; i < n; i++) {
        cin >> b[i] >> l[i] >> u[i];
    }