int main() {
#ifdef HOME
    ifstream cin("A.in");
    ofstream cout("A.out");
#endif
    int i, j, n;
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> n;

    vector <int> x(n + 1);
    for(i = 1; i <= n; i++) {
        cin >> x[i];
    }