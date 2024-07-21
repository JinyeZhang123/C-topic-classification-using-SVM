int main() {
#if 0
    ifstream cin("A.in");
    ofstream cout("A.out");
#endif
    int i, n;
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> n;

    vector <ll> a(n);
    for(i = 0; i < n; i++) {
        cin >> a[i];
    }