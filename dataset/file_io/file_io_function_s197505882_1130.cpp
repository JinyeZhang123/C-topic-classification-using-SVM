int main() {
#if HOME
    ifstream cin("B.in");
    ofstream cout("B.out");
#endif
    int i, n;
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> n;

    int ans = lgput(3, n);
    int bad = 0, cmb = 1;
    for(i = 1; i <= n / 2; i++) {
        mul(cmb, n - i + 1);
        mul(cmb, inv(i));
    }