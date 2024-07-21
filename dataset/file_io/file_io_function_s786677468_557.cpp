int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // std::ifstream in("input.txt");
    // std::cin.rdbuf(in.rdbuf());
    long double PI = 3.141592653589793238462643383;
    ll n;
    cin >> n;
    vector<Engine> engines(n);
    rep(i, n) {
        cin >> engines[i].x >> engines[i].y;
        engines[i].radius = atan2(engines[i].y, engines[i].x);
    }