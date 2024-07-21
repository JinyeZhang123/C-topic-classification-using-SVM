int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    // ifstream cin(".in");

    cin >> n;
    fori (i, n - 1) {
        ll a, b, c; cin >> a >> b >> c;
        A[a] ^= c, A[b] ^= c;
    }