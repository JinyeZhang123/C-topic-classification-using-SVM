int main() {
#ifdef LOCAL
    ifstream in("../arg.txt"); cin.rdbuf(in.rdbuf());
#endif

    ll H, W;
    cin >> H >> W;

    ll ans = 1e20;
    REPN(i, 1, H+1){
        ll h = H-i;
        ll a = i * W;
        if (h % 2 == 0 || W % 2 == 0){
            ll b = h * W / 2;
            ans = min(ans, abs(a - b));
        }