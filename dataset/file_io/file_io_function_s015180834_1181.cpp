int main() {
#if 0
    ifstream cin("A.in");
    ofstream cout("A.out");
#endif
    int i;
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll l, r;
    cin >> l >> r;

    if(l == r) {
        cout << 1;
        return 0;
    }