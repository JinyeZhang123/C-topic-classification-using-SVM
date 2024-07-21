int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    const ll mod = 1e9 + 7;
    ll n, k;
    cin >> n >> k;
    BinomialCoefficient bc(n);
    reps(i, 1, k + 1) {
        ll a = bc.combination(n - k + 1, i);
        ll b = bc.combination(k - 1, i - 1);
        cout << (a * b % mod) << endl;
    }