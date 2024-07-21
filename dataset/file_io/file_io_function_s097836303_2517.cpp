int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n, q;
    cin >> n >> q;
    LazySegmentTree<ll> lst(n, 0, [](ll a, ll b){ return a + b; }